function A3 = kyg_25012341_func_3(r3)
    global V3; 
   
    h3_sub = 3 * V3 ./ (pi * r3.^2);
    A3 = pi * r3 .* sqrt(r3.^2 + h3_sub.^2);
end