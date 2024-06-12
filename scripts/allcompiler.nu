mkdir out
(ls | where type == file).name 
  | filter {|| $in | str ends-with ".cpp"} 
  | each {|| [$in ($in | str replace ".cpp" "" | str replace ".cc" "")]} 
  | each {|| nu -c $"g++ ($in.0) -o out/($in.1) -O2 -Wall -Wextra -Wpedantic"}
