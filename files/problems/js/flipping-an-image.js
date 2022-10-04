// by @codeAbinash

const flipAndInvertImage = image => image.map(elem => elem.reverse().map(b => b ? 0 : 1))