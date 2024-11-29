arduino-cli compile --fqbn arduino:avr:uno ~/Documents/Projects/Arduino/sketch_oct8b

arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:uno ~/Documents/Projects/Arduino/sketch_oct8b

arduino-cli monitor -p /dev/ttyUSB0 -c 9600


cargo +stable install ravedude
cargo install cargo-generate

cargo generate --git https://github.com/Rahix/avr-hal-template.git