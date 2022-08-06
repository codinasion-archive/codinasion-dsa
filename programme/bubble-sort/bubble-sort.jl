# Write a programme for Bubble sort

function sort!(array)
    for i in length(array):-1:1
        for j in 1:i-1
            if array[j] > array[j + 1]
                temp = array[j]
                array[j] = array[j + 1]
                array[j + 1] = temp
            end
        end
    end
end

array = [15, 33, 27, 35, 10]

println("Input  : ", array)
sort!(array)
println("Output : ", array)
