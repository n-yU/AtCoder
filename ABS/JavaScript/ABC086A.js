function main(input) {
    const args = input.split(' ');
    const a = args[0];
    const b = args[1];

    if((a*b)%2 !== 0)
        console.log('Odd');
    else
        console.log('Even');
}

main(require('fs').readFileSync('/dev/stdin', 'utf8'));