def solve
  n = gets.to_i
  a = gets.split.map(&:to_i)
  zero = Array.new(n, 0)
  one = Array.new(n, 0)

  a.each_with_index do |x, i|
    if x == 0
      zero[i] = 1
    elsif x == 1
      one[i] = 1
    end

    if i > 0
      zero[i] += zero[i - 1]
      one[i] += one[i - 1]
    end
  end

  q = gets.to_i
  q.times do
    l, r = gets.split.map(&:to_i)
    l -= 1
    r -= 1

    x = zero[r]
    x -= zero[l - 1] if l > 0

    y = one[r]
    y -= one[l - 1] if l > 0

    len = r - l + 1
    c = (len * (len - 1)) / 2
    c -= (x * (x - 1)) / 2
    c -= x * y

    puts c
  end
end

t = gets.to_i
t.times do
  solve
end
