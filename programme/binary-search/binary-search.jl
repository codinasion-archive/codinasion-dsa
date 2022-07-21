# Write a programme for binary search

function binary_search(list, query; rev=false, lt=<, by=identity)
    if issorted(list) || issorted(list; rev=true)
        low = !rev ? 1 : length(list)
        high = !rev ? length(list) : 1
        middle(l, h) = round(Int, (l + h) // 2)
        query = by(query)

        while !rev ? low <= high : high <= low
            mid = middle(low, high)
            by(list[mid]) === query && return mid:mid
            if lt(by(list[mid]), query)
                low = !rev ? mid + 1 : mid - 1
            else
                high = !rev ? mid - 1 : mid + 1
            end
        end
        return !rev ? (low:high) : (high:low)

    else
        throw(error("List not sorted, unable to search value"))
    end
end

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = 9

println("Input  : ", array)
println("Target : ", target)
println("Output : ", binary_search(array, target))
