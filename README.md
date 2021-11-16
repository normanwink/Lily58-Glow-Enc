# Lily58 × qtkb Glow + Rotary Encoders

This is a mostly finished project, with some caveats. The keyboard works great with all features, except for the lights. They are functional, but I haven't been able to get the firmware to control both sides, and I had to wire the led data backwards due to ordering the wrong LEDs. However, the PCB and case are both solid and functional, and the lighting may just need some software tweaks I haven't yet cracked.

Lily58 is 6×4+4keys column-staggered split keyboard.
This fork adds an encoder to the key below the controller.

I got this board manufactured by JLCPCB. Just upload the file called gerber.zip to their quote tool, choose how many (5 is minimum), choose your color, (default options are fine) and order! Mine were $8.40 for a set of 5 and $9.03 shipping in July 2020.

![Lily58GlowEnc](img/Lily58GlowEnc.jpg)

## PCB Front

![PCB Front](img/PCB-Front.png)

## PCB Back

![PCB Back](img/PCB-Back.png)

# Parts

| Part Name | Quantity | Link | Price/Unit | Total |
| --------- | -------- | ---- | ---------- | ----- |
| Lily58L PCB | 2 | [JLCPCB](https://jlcpcb.com/) | \$9.03 / 5 | \$9.03 |
| Lily58L Case | 1 | [Printable case in the repo](https://github.com/normanwink/Lily58-Glow-Enc/tree/master/case) | \$0.00 | \$0.00 |
| Pro Micro | 2 | [Aliexpress](https://www.aliexpress.com/item/32888212119.html?spm=a2g0o.productlist.0.0.30d25a53xh6DaX&algo_pvid=9e5fb73d-c3e5-475f-bda1-b4666011fa38&algo_expid=9e5fb73d-c3e5-475f-bda1-b4666011fa38-8&btsid=0ab6f82215936295153445783e35b6&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_) | \$5.59 | \$11.17 |
| Micro USB Cable | 2 | -- | \$0.00 | \$0.00 |
| OLED module (optional) | 2 | [Aliexpress](https://www.aliexpress.com/item/32861875681.html?spm=a2g0o.productlist.0.0.835aa9ccjrnsdV&algo_pvid=7def10f1-db5f-4a13-951c-5bf7341c096e&algo_expid=7def10f1-db5f-4a13-951c-5bf7341c096e-0&btsid=0ab6d69f15936287684868637e6e79&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_) | \$3.92 |
| Rotary Encoder EC11 | 2 | [Aliexpress](https://www.aliexpress.com/item/32322425597.html?spm=a2g0o.productlist.0.0.6102314aqRHfGU&algo_pvid=281c4dc1-9caa-459f-8650-fbba7e4bec4d&algo_expid=281c4dc1-9caa-459f-8650-fbba7e4bec4d-9&btsid=0ab6d70515937408315558637e0bf2&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_)| \$1.68 | \$3.35 |
| Knob | 2 | -- | | \$0.00 |
| Key switch (MX) | 58 | [Aliexpress](https://www.aliexpress.com/item/32973993662.html?spm=a2g0o.productlist.0.0.6fdb14ebdXgCiL&algo_pvid=dc98baa5-021b-42b9-806a-ef67fe903a97&algo_expid=dc98baa5-021b-42b9-806a-ef67fe903a97-10&btsid=0ab6d69515936249739887508eaca4&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_) | \$0.29 | \$16.99 |
| Mini LEDs SK6812 | 60 | [Aliexpress](https://www.aliexpress.com/item/1005002364547011.html?spm=a2g0o.productlist.0.0.736d6065FIJVB9&algo_pvid=38adde3a-2421-4a9a-bbe7-d86f8ef42d36&algo_exp_id=38adde3a-2421-4a9a-bbe7-d86f8ef42d36-0&pdp_ext_f=%7B%22sku_id%22%3A%2212000020328905493%22%7D)<br>Note: I did not use these LEDs, but they **should** work | \$0.0966 / 100 | \$9.66 |
| Diodes 1N4148 (Through-hole) | 58 | [Aliexpress](https://www.aliexpress.com/item/1934432186.html?spm=a2g0o.productlist.0.0.43075a93S1HiAy&algo_pvid=2a96b464-fcb2-4d4d-9db0-5325780cc08b&algo_expid=2a96b464-fcb2-4d4d-9db0-5325780cc08b-2&btsid=0ab6f82415937472454356384e6daf&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_) | \$0.04 | \$2.48 |
| TRRS Jack | 2 | [Aliexpress](https://www.aliexpress.com/item/33029465106.html?spm=a2g0o.productlist.0.0.4c934e0cJHeHoK&algo_pvid=eae4b36e-738c-4df6-8e73-ad7bf5885647&algo_expid=eae4b36e-738c-4df6-8e73-ad7bf5885647-0&btsid=0ab6fab215936264228847161e1394&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_) | \$1.63 | \$3.26 |
| TRRS Cable | 1 | [Aliexpress](https://www.aliexpress.com/item/33000197351.html?spm=a2g0o.productlist.0.0.21a2246ecsIFwV&algo_pvid=fd7c3341-82d4-4c30-813e-1d52c9431132&algo_expid=fd7c3341-82d4-4c30-813e-1d52c9431132-3&btsid=0ab6fab215936268107442907e1395&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_)| \$1.79 | \$1.79 |
| Key Caps | 58 | [Aliexpress](https://www.aliexpress.com/item/32744591039.html?spm=a2g0o.cart.0.0.1fff3c00zqG7Sv&mp=1) | \$0.44 | \$25.5   | |
| | | | Total: | \$115.80 |
