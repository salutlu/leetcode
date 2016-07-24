/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {

    for (var i = 0, j = 0; i < nums.length; i++) {
        if (nums[i] === val) {

        } else {
            nums[j++] = nums[i];
        }
    }
    return j;
};

var nums = [5,3,42,34,6,5,4,2,1,6,8,9,5,5,5,6,7,6];
var val = 5;

console.log(removeElement(nums, val));

console.log(nums);
