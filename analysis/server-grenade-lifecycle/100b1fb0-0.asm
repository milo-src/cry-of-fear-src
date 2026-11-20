
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1fb0 <.text+0xb0fb0>:
100b1fb0:	56                   	push   esi
100b1fb1:	8b f1                	mov    esi,ecx
100b1fb3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1fb6:	83 c0 08             	add    eax,0x8
100b1fb9:	50                   	push   eax
100b1fba:	e8 c1 77 06 00       	call   0x10119780
100b1fbf:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1fc2:	83 c4 04             	add    esp,0x4
100b1fc5:	83 f8 fd             	cmp    eax,0xfffffffd
100b1fc8:	75 79                	jne    0x100b2043
100b1fca:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
100b1fcf:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
100b1fd4:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100b1fd9:	f3 0f 10 1d 04 1f 1a 	movss  xmm3,DWORD PTR ds:0x101a1f04
100b1fe0:	10 
100b1fe1:	6a 64                	push   0x64
100b1fe3:	f3 0f 58 d3          	addss  xmm2,xmm3
100b1fe7:	83 ec 0c             	sub    esp,0xc
100b1fea:	8b c4                	mov    eax,esp
100b1fec:	f3 0f 58 cb          	addss  xmm1,xmm3
100b1ff0:	f3 0f 58 c3          	addss  xmm0,xmm3
100b1ff4:	83 ec 0c             	sub    esp,0xc
100b1ff7:	f3 0f 11 10          	movss  DWORD PTR [eax],xmm2
100b1ffb:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100b2000:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100b2005:	8b c4                	mov    eax,esp
100b2007:	f3 0f 10 51 0c       	movss  xmm2,DWORD PTR [ecx+0xc]
100b200c:	f3 0f 10 49 10       	movss  xmm1,DWORD PTR [ecx+0x10]
100b2011:	f3 0f 5c d3          	subss  xmm2,xmm3
100b2015:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100b201a:	f3 0f 5c cb          	subss  xmm1,xmm3
100b201e:	f3 0f 5c c3          	subss  xmm0,xmm3
100b2022:	f3 0f 11 50 04       	movss  DWORD PTR [eax+0x4],xmm2
100b2027:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100b202c:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100b2030:	e8 7b 5c 06 00       	call   0x10117cb0
100b2035:	83 c4 1c             	add    esp,0x1c
100b2038:	56                   	push   esi
100b2039:	e8 c2 78 06 00       	call   0x10119900
100b203e:	83 c4 04             	add    esp,0x4
100b2041:	5e                   	pop    esi
100b2042:	c3                   	ret
100b2043:	6a 00                	push   0x0
100b2045:	8d 41 08             	lea    eax,[ecx+0x8]
100b2048:	50                   	push   eax
100b2049:	6a 17                	push   0x17
100b204b:	6a 04                	push   0x4
100b204d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b2053:	6a 05                	push   0x5
100b2055:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b205b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b205e:	83 c4 10             	add    esp,0x10
100b2061:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100b2066:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b206b:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b2071:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2074:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100b2079:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b207e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b2084:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2087:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100b208c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b2091:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b2097:	0f bf 05 14 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f14
100b209e:	50                   	push   eax
100b209f:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100b20a5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b20a8:	f3 0f 10 80 e4 01 00 	movss  xmm0,DWORD PTR [eax+0x1e4]
100b20af:	00 
100b20b0:	f3 0f 5c 05 fc 1e 1a 	subss  xmm0,DWORD PTR ds:0x101a1efc
100b20b7:	10 
100b20b8:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b20bb:	f2 0f 59 05 68 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e68
100b20c2:	10 
100b20c3:	f2 0f 2c c0          	cvttsd2si eax,xmm0
100b20c7:	50                   	push   eax
100b20c8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b20ce:	6a 0c                	push   0xc
100b20d0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b20d6:	83 c4 10             	add    esp,0x10
100b20d9:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b20df:	56                   	push   esi
100b20e0:	e8 1b 78 06 00       	call   0x10119900
100b20e5:	83 c4 04             	add    esp,0x4
100b20e8:	5e                   	pop    esi
100b20e9:	c3                   	ret
