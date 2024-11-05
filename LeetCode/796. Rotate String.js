/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function (s, goal) {
    let aux = goal + goal;
    if (goal.length < s.length) {
        return false;
    };
    return aux.includes(s);
};