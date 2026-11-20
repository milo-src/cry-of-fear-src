
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2010 <.text+0xc1010>:
100c2010:	55                   	push   ebp
100c2011:	8b ec                	mov    ebp,esp
100c2013:	83 ec 0c             	sub    esp,0xc
100c2016:	56                   	push   esi
100c2017:	8b f1                	mov    esi,ecx
100c2019:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c201c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c2022:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100c2028:	8d 4d f4             	lea    ecx,[ebp-0xc]
100c202b:	51                   	push   ecx
100c202c:	50                   	push   eax
100c202d:	e8 fe d1 f4 ff       	call   0x1000f230
100c2032:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c2035:	83 c4 0c             	add    esp,0xc
100c2038:	f3 0f 7e 45 f4       	movq   xmm0,QWORD PTR [ebp-0xc]
100c203d:	66 0f d6 81 78 01 00 	movq   QWORD PTR [ecx+0x178],xmm0
100c2044:	00 
100c2045:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100c2048:	89 81 80 01 00 00    	mov    DWORD PTR [ecx+0x180],eax
100c204e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c2051:	5e                   	pop    esi
100c2052:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
100c2059:	00 
100c205a:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
100c2061:	9f                   	lahf
100c2062:	f6 c4 44             	test   ah,0x44
100c2065:	7a 48                	jp     0x100c20af
100c2067:	f3 0f 10 81 7c 01 00 	movss  xmm0,DWORD PTR [ecx+0x17c]
100c206e:	00 
100c206f:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
100c2076:	9f                   	lahf
100c2077:	f6 c4 44             	test   ah,0x44
100c207a:	7a 33                	jp     0x100c20af
100c207c:	f3 0f 10 81 80 01 00 	movss  xmm0,DWORD PTR [ecx+0x180]
100c2083:	00 
100c2084:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
100c208b:	9f                   	lahf
100c208c:	f6 c4 44             	test   ah,0x44
100c208f:	7a 1e                	jp     0x100c20af
100c2091:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c2096:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c209c:	03 01                	add    eax,DWORD PTR [ecx]
100c209e:	50                   	push   eax
100c209f:	68 24 50 1d 10       	push   0x101d5024
100c20a4:	6a 02                	push   0x2
100c20a6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c20ac:	83 c4 0c             	add    esp,0xc
100c20af:	8b e5                	mov    esp,ebp
100c20b1:	5d                   	pop    ebp
100c20b2:	c3                   	ret
