10080910:	55                   	push   ebp
10080911:	8b ec                	mov    ebp,esp
10080913:	51                   	push   ecx
10080914:	e8 f7 00 00 00       	call   0x10080a10
10080919:	66 0f 6e c0          	movd   xmm0,eax
1008091d:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10080921:	f2 0f 59 05 58 ee 13 	mulsd  xmm0,QWORD PTR ds:0x1013ee58
10080928:	10 
10080929:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1008092d:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10080932:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
10080935:	8b e5                	mov    esp,ebp
10080937:	5d                   	pop    ebp
10080938:	c3                   	ret
