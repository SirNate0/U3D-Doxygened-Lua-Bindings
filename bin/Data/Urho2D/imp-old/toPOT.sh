#!/bin/bash

# https://legacy.imagemagick.org/discourse-server/viewtopic.php?f=1&t=11979#p39254

p2w=`convert $1 -format "%[fx:2^(ceil(log(w)/log(2)))]" info:`
p2h=`convert $1 -format "%[fx:2^(ceil(log(h)/log(2)))]" info:`

echo $p2w $p2h

convert $1 -background none -transparent none -gravity center -extent ${p2w}x${p2h} $1.png
# echo convert $1 -resize ${p2w}x${p2h}\! $1.png
# convert $1 -resize ${p2w}x${p2h}\! $1.png
 
# for square 
# p2=`convert rose: -format "%[fx:2^(ceil(log(max(w,h))/log(2)))]" info:`

#convert rose: -background white -gravity center -extent ${p2}x${p2} padded_rose.png


