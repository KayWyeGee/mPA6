x = linspace(0, 2, 1000);
u = 3 * log10(70*x + 1);
v = 4 * cos(7*x);

plot(x, u, 'r', x, v, 'b')
xlabel('Distance (mile)')
ylabel('Velocity (mile/hour)')
title('Velocity vs Distance')
legend('u = 3log10(70x+1)', 'v = 4cos(7x)')
grid on