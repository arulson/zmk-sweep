
        combos {

                compatible = "zmk,combos";
                  switch_no_hm_layer {
                    timeout-ms = <30>;
                    key-positions = <0 1 2 3>;
                    bindings = <&tog DEFAULT_NO_HM>;
                    layers = <0 1 2>;
                };

                compatible = "zmk,combos";
                  switch_long_hm_layer {
                    timeout-ms = <30>;
                    key-positions = <20 21 22 23>;
                    bindings = <&to DEFAULT_LONG_HM>;
                    layers = <0 1 2>;
                };

				compatible = "zmk,combos";
                  switch_base_layer {
                    timeout-ms = <30>;
                    key-positions = <4 14 24>;
                    bindings = <&to DEFAULT>;
                    layers = <0 1 2>;
                };

                compatible = "zmk,combos";
                  combo_reset_left {
                    timeout-ms = <50>;
                    key-positions = <2 3 4>;
                    bindings = <&reset>;
                    layers = <0 1 2>;
                };
                 
                combo_reset_right {
                    timeout-ms = <50>; 
                    key-positions = <5 6 7>;
                    bindings = <&reset>;
                    layers = <0 1 2>;
                };
                 
                combo_bootloader_left {
                    timeout-ms = <50>;
                    key-positions = <1 2 3 4>;
                    bindings = <&bootloader>;
                    layers = <0 1 2>;
                };

                combo_bootloader_right {
                    timeout-ms = <50>;
                    key-positions = <5 6 7 8>;
                    bindings = <&bootloader>;
                    layers = <0 1 2>;
                };
                
                combo_esc_left {
                    timeout-ms = <20>;
                    key-positions = <13 14>;
                    bindings = <&kp ESC>;
                    layers = <0 1 2>;
                };

                combo_esc_right {
                    timeout-ms = <20>;
                    key-positions = <15 16>;
                    bindings = <&kp ESC>;
                    layers = <0 1 2>;
                };

                combo_caps_word {
                    timeout-ms = <50>;
                    key-positions = <11 18>;
                    bindings = <&caps_word>; 
                    layers = <0 1 2>;
                };

                combo_caps_lock {
                    timeout-ms = <30>;
                    key-positions = <21 28>;
                    bindings = <&kp CAPS>;
                    layers = <0 1 2>;
                };

                combo_alt_left_up {
                    timeout-ms = <50>; 
                    key-positions = <3 13>;
                    bindings = <&kp LALT>;
                    layers = <0 1 2>;
                };

                combo_alt_right_up {
                    timeout-ms = <50>;
                    key-positions = <6 16>;
                    bindings = <&kp RALT>;
                    layers = <0 1 2>;
                };

                combo_tab_bottom_left {
                    timeout-ms = <50>;
                    key-positions = <20 21>;
                    bindings = <&kp TAB>;
                    layers = <0 1 2>;
                };

                combo_tab_left {
                    timeout-ms = <40>;
                    key-positions = <12 13>;
                    bindings = <&kp TAB>;
                    layers = <0 1 2>;
                };

                combo_tab_right {
                    timeout-ms = <40>;
                    key-positions = <16 17>;
                    bindings = <&kp TAB>;
                    layers = <0 1 2>;
                };
        

        };
