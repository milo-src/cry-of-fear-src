
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117fe0 <.text+0x116fe0>:
10117fe0:	55                   	push   ebp
10117fe1:	8b ec                	mov    ebp,esp
10117fe3:	56                   	push   esi
10117fe4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10117fe7:	f3 0f 10 46 10       	movss  xmm0,DWORD PTR [esi+0x10]
10117fec:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
10117ff3:	9f                   	lahf
10117ff4:	f6 c4 44             	test   ah,0x44
10117ff7:	0f 8b ab 00 00 00    	jnp    0x101180a8
10117ffd:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10118000:	85 c0                	test   eax,eax
10118002:	74 12                	je     0x10118016
10118004:	50                   	push   eax
10118005:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1011800b:	83 c4 04             	add    esp,0x4
1011800e:	85 c0                	test   eax,eax
10118010:	0f 85 92 00 00 00    	jne    0x101180a8
10118016:	6a 00                	push   0x0
10118018:	6a 00                	push   0x0
1011801a:	ff 35 58 65 22 10    	push   DWORD PTR ds:0x10226558
10118020:	6a 00                	push   0x0
10118022:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10118028:	f3 0f 10 46 14       	movss  xmm0,DWORD PTR [esi+0x14]
1011802d:	83 c4 0c             	add    esp,0xc
10118030:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118035:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011803b:	f3 0f 10 46 18       	movss  xmm0,DWORD PTR [esi+0x18]
10118040:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118045:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011804b:	f3 0f 10 46 1c       	movss  xmm0,DWORD PTR [esi+0x1c]
10118050:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118055:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011805b:	f3 0f 10 46 24       	movss  xmm0,DWORD PTR [esi+0x24]
10118060:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118065:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011806b:	f3 0f 10 46 28       	movss  xmm0,DWORD PTR [esi+0x28]
10118070:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118075:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011807b:	f3 0f 10 46 2c       	movss  xmm0,DWORD PTR [esi+0x2c]
10118080:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10118085:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011808b:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1011808e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10118094:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10118097:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011809d:	83 c4 0c             	add    esp,0xc
101180a0:	5e                   	pop    esi
101180a1:	5d                   	pop    ebp
101180a2:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
101180a8:	5e                   	pop    esi
101180a9:	5d                   	pop    ebp
101180aa:	c3                   	ret
