savedcmd_/home/salathiel/km/my_first_km/my_module.mod := printf '%s\n'   my_module.o | awk '!x[$$0]++ { print("/home/salathiel/km/my_first_km/"$$0) }' > /home/salathiel/km/my_first_km/my_module.mod
