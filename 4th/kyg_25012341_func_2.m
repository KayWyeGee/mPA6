function [t2_up, t2_down] = kyg_25012341_func_2(h2, v02, g2)
    discriminant2 = v02^2 - 2 * g2 * h2;
    
    t2_up = (v02 - sqrt(discriminant2)) / g2;
    t2_down = (v02 + sqrt(discriminant2)) / g2;
end