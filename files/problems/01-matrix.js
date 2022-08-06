var updateMatrix = function (mat) {
    const loc = []

    mat.forEach((row, rowIndex) => {
        row.forEach((num, colIndex) => {
            if (num === 0)
                loc.push({ row: rowIndex, col: colIndex })
        })
    })

    mat.forEach((row, rowIndex) => {
        row.forEach((num, colIndex) => {
            if (num === 1) {
                const low = loc.reduce((minimumDistance, location) => {
                    const a = Math.max(rowIndex, location.row)
                    const b = Math.max(colIndex, location.col)
                    const c = Math.min(rowIndex, location.row)
                    const d = Math.min(colIndex, location.col)

                    const distance = (a - c) + (b - d)
                    return Math.min(distance, minimumDistance)
                }, Infinity)

                mat[rowIndex][colIndex] = low
            }
        })
    })
    return mat
};