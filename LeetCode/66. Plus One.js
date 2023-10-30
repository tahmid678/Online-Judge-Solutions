/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
    var inc = 1;
    digits = digits.reverse().map(num => {
        if (num + inc >= 10) {
            let tmp = (num + inc) % 10;
            inc = Math.floor((num + inc) / 10);
            return tmp;
        } else {
            let tmp = num + inc;
            inc = Math.floor((num + inc) / 10);
            return tmp;
        }
    });

    if (inc) {
        digits.push(inc);
    }

    return digits.reverse();
};