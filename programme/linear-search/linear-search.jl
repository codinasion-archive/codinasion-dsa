# Write a programme for Linear Search.

function find(array, target)
    for i in 1:length(array)
        if array[i] == target
            return i
        end
    end
    println("Target was not found in the given array!")
    return -1
end

array = [10, 20, 80, 30, 60, 50]
target = 30

println("Array  : ", array)
println("Target : ", target)
println("Index  : ", find(array, target))