==============================================================================
Generated Quads for the program
  0. :t000	=	2
  1. :x	=	t000
  2. :t001	=	5
  3. :y	=	t001
  4. :param	x
  5. :param	y
  6. :t002	=	call sum, 2
  7. :sm	=	t002
  8. :param	x
  9. :param	y
 10. :t003	=	call mod, 2
 11. :md	=	t003
 12. :param	x
 13. :param	y
 14. :t004	=	call mod_2, 2
 15. :md_2	=	t004
 16. :if  md ==md_2	goto 19
 17. :goto 23
 18. :goto 27
 19. :t005	=	0
 20. :y	=	t005
 21. :t006	=	t005
 22. :goto 27
 23. :t007	=	1
 24. :y	=	t007
 25. :t008	=	t007
 26. :goto 27
 27. :param	x
 28. :param	y
 29. :t009	=	call mod_2, 2
 30. :t010	=	a + b
 31. :ans	=	t010
 32. :return	ans
 33. :t011	=	a % b
 34. :ans	=	t011
 35. :return	ans
 36. :t012	=	0
 37. :if  b !=t012	goto 40
 38. :goto 44
 39. :goto 49
 40. :t013	=	a / b
 41. :ans	=	t013
 42. :t014	=	t013
 43. :goto 49
 44. :t015	=	1
 45. :t016	=	-t015
 46. :ans	=	t016
 47. :t017	=	t016
 48. :goto 49
 49. :return	ans
 50. :if  a >b	goto 53
 51. :goto 60
 52. :goto 67
 53. :param	a
 54. :param	b
 55. :t018	=	call divide, 2
 56. :t019	=	a - t018
 57. :ans	=	t019
 58. :t020	=	t019
 59. :goto 67
 60. :param	a
 61. :param	b
 62. :t021	=	call divide, 2
 63. :t022	=	b - t021
 64. :ans	=	t022
 65. :t023	=	t022
 66. :goto 67
 67. :return	ans
==============================================================================Symbol table Maintained For the Given Program

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : Global
Name	Value	var_type	size	Offset	Type
sum	null	func	0	-1	ptr-to-St( sum )Int
mod	null	func	0	-1	ptr-to-St( mod )Int
mod_2	null	func	0	-1	ptr-to-St( mod_2 )Int
divide	null	func	0	-1	ptr-to-St( divide )Int
main	null	func	0	-1	ptr-to-St( main )Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : sum
Name	Value	var_type	size	Offset	Type
retVal	null	return	4	0	Int
a	null	param	4	4	Int
b	null	param	4	8	Int
ans	null	local	4	12	Int
t010	null	temp	4	-1	Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : mod
Name	Value	var_type	size	Offset	Type
retVal	null	return	4	0	Int
a	null	param	4	4	Int
b	null	param	4	8	Int
ans	null	local	4	12	Int
t011	null	temp	4	-1	Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : mod_2
Name	Value	var_type	size	Offset	Type
retVal	null	return	4	0	Int
a	null	param	4	4	Int
b	null	param	4	8	Int
ans	null	local	4	12	Int
t018	null	temp	4	-1	Int
t019	null	temp	4	-1	Int
t020	null	temp	4	-1	Int
t021	null	temp	4	-1	Int
t022	null	temp	4	-1	Int
t023	null	temp	4	-1	Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : divide
Name	Value	var_type	size	Offset	Type
retVal	null	return	4	0	Int
a	null	param	4	4	Int
b	null	param	4	8	Int
ans	null	local	4	12	Int
t012	0	temp	4	-1	Int
t013	null	temp	4	-1	Int
t014	null	temp	4	-1	Int
t015	1	temp	4	-1	Int
t016	null	temp	4	-1	Int
t017	null	temp	4	-1	Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Symbol Table : main
Name	Value	var_type	size	Offset	Type
retVal	null	return	4	0	Int
x	null	local	4	4	Int
t000	2	temp	4	-1	Int
y	null	local	4	12	Int
t001	5	temp	4	-1	Int
sm	null	local	4	20	Int
t002	null	temp	4	-1	Int
md	null	local	4	28	Int
t003	null	temp	4	-1	Int
md_2	null	local	4	36	Int
t004	null	temp	4	-1	Int
t005	0	temp	4	-1	Int
t006	null	temp	4	-1	Int
t007	1	temp	4	-1	Int
t008	null	temp	4	-1	Int
t009	null	temp	4	-1	Int

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
=============================================================================