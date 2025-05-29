# Maintainer: Riley Ava (TheRileyMeta@gmail.com)
pkgname=hello
pkgver=0.1
pkgrel=1
pkgdesc="Print 'Hello, World!' to the console."
arch=('x86_64')
url="https://github.com/RileyMeta/Random/blob/master/C/Hello_World.c"
license=("MPL-2.0")
source=("hello_world.c")
md5sums=('SKIP')

CFLAGS="-O2 -Wall"

build() {
    gcc $CFLAGS "${source[0]}" -o $pkgname
}

package() {
    install -Dm755 "$pkgname" "$pkgdir/usr/bin/$pkgname"
}
