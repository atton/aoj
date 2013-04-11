# vim:set fileencoding=utf-8:

mountains = []

while mountain = gets
  mountains << mountain.chomp.to_i
end

puts mountains.sort.reverse.take(3).join("\n")
