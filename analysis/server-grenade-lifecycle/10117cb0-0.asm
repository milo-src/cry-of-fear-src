
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117cb0 <.text+0x116cb0>:
10117cb0:	55                   	push   ebp
10117cb1:	8b ec                	mov    ebp,esp
10117cb3:	83 ec 10             	sub    esp,0x10
10117cb6:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10117cbb:	8d 45 f0             	lea    eax,[ebp-0x10]
10117cbe:	f3 0f 58 45 08       	addss  xmm0,DWORD PTR [ebp+0x8]
10117cc3:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
10117cca:	10 
10117ccb:	83 ec 08             	sub    esp,0x8
10117cce:	f3 0f 10 55 1c       	movss  xmm2,DWORD PTR [ebp+0x1c]
10117cd3:	f3 0f 58 55 10       	addss  xmm2,DWORD PTR [ebp+0x10]
10117cd8:	f3 0f 59 c1          	mulss  xmm0,xmm1
10117cdc:	f3 0f 59 d1          	mulss  xmm2,xmm1
10117ce0:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10117ce5:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10117cea:	f3 0f 58 45 0c       	addss  xmm0,DWORD PTR [ebp+0xc]
10117cef:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
10117cf4:	f3 0f 59 c1          	mulss  xmm0,xmm1
10117cf8:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10117cfd:	0f 28 c2             	movaps xmm0,xmm2
10117d00:	f3 0f 58 05 d4 fe 1a 	addss  xmm0,DWORD PTR ds:0x101afed4
10117d07:	10 
10117d08:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10117d0e:	f3 0f 11 14 24       	movss  DWORD PTR [esp],xmm2
10117d13:	50                   	push   eax
10117d14:	e8 17 2d 00 00       	call   0x1011aa30
10117d19:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10117d1c:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10117d21:	8d 45 f0             	lea    eax,[ebp-0x10]
10117d24:	f3 0f 5c 45 10       	subss  xmm0,DWORD PTR [ebp+0x10]
10117d29:	6a 00                	push   0x0
10117d2b:	50                   	push   eax
10117d2c:	6a 17                	push   0x17
10117d2e:	6a 05                	push   0x5
10117d30:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10117d35:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10117d3b:	6a 71                	push   0x71
10117d3d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10117d43:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10117d48:	83 c4 1c             	add    esp,0x1c
10117d4b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117d50:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117d56:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10117d5b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117d60:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117d66:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10117d6b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117d70:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117d76:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10117d7b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117d80:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117d86:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10117d8b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117d90:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117d96:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
10117d9b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117da0:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117da6:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10117dab:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117db0:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117db6:	0f bf 05 1c 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f1c
10117dbd:	50                   	push   eax
10117dbe:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10117dc4:	ff 75 20             	push   DWORD PTR [ebp+0x20]
10117dc7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10117dcd:	83 c4 08             	add    esp,0x8
10117dd0:	c7 04 24 00 00 00 41 	mov    DWORD PTR [esp],0x41000000
10117dd7:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117ddd:	83 c4 04             	add    esp,0x4
10117de0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10117de6:	8b e5                	mov    esp,ebp
10117de8:	5d                   	pop    ebp
10117de9:	c3                   	ret
