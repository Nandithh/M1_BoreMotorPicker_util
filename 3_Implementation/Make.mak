#TargetName : Dependencies
#<TAB>commands

Build : main_bmp.c Bore_motor_picker.c
        gcc main_bmp.c Bore_motor_picker.c -o Bore_motor_picker.out

Run : Build
        ./Bore_motor_picker.out        

Clean:
      rm -*.o *.i *.out *.s        