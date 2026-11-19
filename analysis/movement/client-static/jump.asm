
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10079200 <.text+0x78200>:
10079200:	83 3d 58 cb 18 10 00 	cmp    DWORD PTR ds:0x1018cb58,0x0
10079207:	74 22                	je     0x1007922b
10079209:	a1 ac 2b 54 10       	mov    eax,ds:0x10542bac
1007920e:	40                   	inc    eax
1007920f:	a3 ac 2b 54 10       	mov    ds:0x10542bac,eax
10079214:	3b 05 a8 2b 54 10    	cmp    eax,DWORD PTR ds:0x10542ba8
1007921a:	7c 5a                	jl     0x10079276
1007921c:	68 54 f8 14 10       	push   0x1014f854
10079221:	ff 15 54 26 1b 10    	call   DWORD PTR ds:0x101b2654
10079227:	83 c4 04             	add    esp,0x4
1007922a:	c3                   	ret
1007922b:	83 3d 10 2f 1b 10 00 	cmp    DWORD PTR ds:0x101b2f10,0x0
10079232:	75 42                	jne    0x10079276
10079234:	80 3d 40 33 54 10 00 	cmp    BYTE PTR ds:0x10543340,0x0
1007923b:	74 20                	je     0x1007925d
1007923d:	f3 0f 10 05 f8 94 55 	movss  xmm0,DWORD PTR ds:0x105594f8
10079244:	10 
10079245:	0f 5a c0             	cvtps2pd xmm0,xmm0
10079248:	f2 0f 58 05 68 ee 13 	addsd  xmm0,QWORD PTR ds:0x1013ee68
1007924f:	10 
10079250:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10079254:	f3 0f 11 05 f8 94 55 	movss  DWORD PTR ds:0x105594f8,xmm0
1007925b:	10 
1007925c:	c3                   	ret
1007925d:	68 8c 34 54 10       	push   0x1054348c
10079262:	e8 19 15 00 00       	call   0x1007a780
10079267:	83 c4 04             	add    esp,0x4
1007926a:	b9 88 da 18 10       	mov    ecx,0x1018da88
1007926f:	6a 02                	push   0x2
10079271:	e8 aa d7 ff ff       	call   0x10076a20
10079276:	c3                   	ret
10079277:	cc                   	int3
10079278:	cc                   	int3
10079279:	cc                   	int3
1007927a:	cc                   	int3
1007927b:	cc                   	int3
1007927c:	cc                   	int3
1007927d:	cc                   	int3
1007927e:	cc                   	int3
1007927f:	cc                   	int3
10079280:	68 8c 34 54 10       	push   0x1054348c
10079285:	e8 66 15 00 00       	call   0x1007a7f0
1007928a:	59                   	pop    ecx
1007928b:	c3                   	ret
1007928c:	cc                   	int3
1007928d:	cc                   	int3
1007928e:	cc                   	int3
1007928f:	cc                   	int3
