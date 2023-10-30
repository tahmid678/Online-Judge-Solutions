/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
    nums.sort((a, b) => a - b);
    for (let i = 0; i < nums.length; i += 3) {
        if (nums[i] === nums[i + 1] && nums[i + 1] === nums[i + 2]) {
            continue;
        } else {
            return nums[i];
        }
    }

    return nums[i];
};