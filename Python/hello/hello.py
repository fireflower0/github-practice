import sys

if len(sys.argv) != 2:
  print('Error: argument number')
else:
  if sys.argv[1][0] == '-':
    if sys.argv[1][1] == 'v':
      print('Version: 0.0.1')
    elif sys.argv[1][1] == 'h':
      print("[Help]")
      print("Usage: ./hello <your name>")
      print("v : Show version")
      print("h : Show help message")
  else:
    print('Hello,', sys.argv[1], '!')
