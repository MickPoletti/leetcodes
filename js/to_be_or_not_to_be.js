/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: function(n) {
            if (val === n) {
                return true
            }
            throw new Error("Not Equal")
        },
        notToBe: function(m) {
            if (val !== m) {
                return true
            }
            throw new Error("Equal")
        }
    }
    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
/**
 * Key thing to understand here is that the function expression
 * returns an object with function expressions that you can access.
 * Therefore, when you call expect(5) you get toBe and notToBe which
 * you can then call on to get the output.
 */
