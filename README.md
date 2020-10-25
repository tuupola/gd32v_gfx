## Graphics speed tests for GD32V

![Circles](https://appelsiini.net/img/2020/pod-draw-circle.png)

[HAGL](https://github.com/tuupola/hagl) graphics library speed tests for GD32V based boards. See the accompanying [blog post](https://appelsiini.net/2020/embedded-graphics-library/).

```
$ git clone git@github.com:tuupola/gd32v_gfx.git --recursive
$ cd gd32v_gfx
$ make SOC=gd32vf103 BOARD=gd32vf103c_longan_nano all
$ make SOC=gd32vf103 BOARD=gd32vf103c_longan_nano upload
```
