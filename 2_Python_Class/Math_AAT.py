# from sympy import integrate

# 1)
# integrate(f(x),[x, lower limit, upper limit])
# x = Symbol('x')
# y = x**2-1
# y1 = x*sin(x**2)
# I = integrate(y1,[x,0,pi])
# I1 = integrate(y,[x,0,1])
# display(I)
# display(I1)

# 2)
# integrate(f(x),[x, lower limit, upper limit])
# from sympy import *
# x,y = symbols('x,y')
# f= x**3 + y**3 - 3*x*y
# I = integrate(f, [y,sin(x),cos(x)],[x, 0, pi])
# I1 = integrate(f, [y,sin(x),cos(x)],[x, 0, pi])
# display(I)
# print(I1)


# 3)
# from sympy import *
# r,t = symbols('r,t')
# r=3*(1+cos(t))
# I = integrate(r,[t,0, pi])
# print(I)

# 4)
# from sympy import *
# r,t = symbols('r,t')
# u = 3*r**2*cos(t)
# J = integrate(u, [r, cos(t), t**3], [t,pi/4,pi/2])
# display(J)

# 5)
# from sympy import *
# n= 1/4
# if beta (n,1-n)==gamma(n)*gamma(1-n):
#   display("True")
# else:
#   display("False")
# display(beta(n, 1-n))
# display(gamma(n))
# display(gamma(1-n))

# 6)
# from sympy.vector import CoordSys3D, Del
# c = CoordSys3D('c')
# delop = Del()
# gradient_field = delop (c.x*c.y*c.z)
# gradient_field.doit()

#
# from sympy.vector import CoordSys3D, Del
# from sympy.vector import Curl
# # 7)
# c = CoordSys3D('c')
# curl(c.x*c.y*c.z*(c.i+c.j+c.k))
# A=curl(c.x*c.y*c.z*(3*c.i+4*c.j-5*c.k))
# display(A)

#
# from sympy.vector import CoordSys3D, directional_derivative
# # 8)
# C= CoordSys3D('c')
# T = directional_derivative(c.x*c.y*c.z, 3*c.i+4*c.j+c.k)
# display(T)

#
# from sympy.vector import gradient, curl
# curl(gradient(c.x*c.y*c.z))

#
# from sympy.vector import divergence
# divergence(c.x*c.y**2*c.z*(c.x*c.i))