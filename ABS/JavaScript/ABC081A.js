function main(input) {
    console.log(input.split('1').length-1);
}

main(require('fs').readFileSync('/dev/stdin', 'utf8'));