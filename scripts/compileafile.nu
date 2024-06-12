export def compile [name: string] {
  mkdir out
  let out_name = $name | str replace ".cpp" "" | str replace ".cc" ""
  nu -c $"g++ ($name) -o out/($out_name) -O2 -Wall -Wextra -Wpedantic"
}
