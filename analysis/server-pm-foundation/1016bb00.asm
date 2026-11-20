
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016bb00 <.text+0x16ab00>:
1016bb00:	83 ec 08             	sub    esp,0x8
1016bb03:	0f ae 5c 24 04       	stmxcsr DWORD PTR [esp+0x4]
1016bb08:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1016bb0c:	25 80 7f 00 00       	and    eax,0x7f80
1016bb11:	3d 80 1f 00 00       	cmp    eax,0x1f80
1016bb16:	75 0f                	jne    0x1016bb27
1016bb18:	d9 3c 24             	fnstcw WORD PTR [esp]
1016bb1b:	66 8b 04 24          	mov    ax,WORD PTR [esp]
1016bb1f:	66 83 e0 7f          	and    ax,0x7f
1016bb23:	66 83 f8 7f          	cmp    ax,0x7f
1016bb27:	8d 64 24 08          	lea    esp,[esp+0x8]
1016bb2b:	0f 85 6e 01 00 00    	jne    0x1016bc9f
1016bb31:	66 0f c5 c0 03       	pextrw eax,xmm0,0x3
1016bb36:	66 25 ff 7f          	and    ax,0x7fff
1016bb3a:	66 2d 30 30          	sub    ax,0x3030
1016bb3e:	66 3d c5 10          	cmp    ax,0x10c5
1016bb42:	0f 87 36 01 00 00    	ja     0x1016bc7e
1016bb48:	66 0f 12 0d a0 dc 1e 	movlpd xmm1,QWORD PTR ds:0x101edca0
1016bb4f:	10 
1016bb50:	f2 0f 59 c8          	mulsd  xmm1,xmm0
1016bb54:	66 0f 12 15 a8 dc 1e 	movlpd xmm2,QWORD PTR ds:0x101edca8
1016bb5b:	10 
1016bb5c:	f2 0f 2d d1          	cvtsd2si edx,xmm1
1016bb60:	f2 0f 58 ca          	addsd  xmm1,xmm2
1016bb64:	66 0f 12 1d c0 dc 1e 	movlpd xmm3,QWORD PTR ds:0x101edcc0
1016bb6b:	10 
1016bb6c:	f2 0f 5c ca          	subsd  xmm1,xmm2
1016bb70:	66 0f 28 15 b0 dc 1e 	movapd xmm2,XMMWORD PTR ds:0x101edcb0
1016bb77:	10 
1016bb78:	f2 0f 59 d9          	mulsd  xmm3,xmm1
1016bb7c:	66 0f 14 c9          	unpcklpd xmm1,xmm1
1016bb80:	81 c2 10 76 1c 00    	add    edx,0x1c7610
1016bb86:	f2 0f 10 e0          	movsd  xmm4,xmm0
1016bb8a:	83 e2 3f             	and    edx,0x3f
1016bb8d:	66 0f 28 2d 90 dc 1e 	movapd xmm5,XMMWORD PTR ds:0x101edc90
1016bb94:	10 
1016bb95:	8d 05 10 0c 1f 10    	lea    eax,ds:0x101f0c10
1016bb9b:	c1 e2 05             	shl    edx,0x5
1016bb9e:	03 c2                	add    eax,edx
1016bba0:	66 0f 59 d1          	mulpd  xmm2,xmm1
1016bba4:	f2 0f 5c c3          	subsd  xmm0,xmm3
1016bba8:	f2 0f 59 0d c8 dc 1e 	mulsd  xmm1,QWORD PTR ds:0x101edcc8
1016bbaf:	10 
1016bbb0:	f2 0f 5c e3          	subsd  xmm4,xmm3
1016bbb4:	66 0f 12 78 08       	movlpd xmm7,QWORD PTR [eax+0x8]
1016bbb9:	66 0f 14 c0          	unpcklpd xmm0,xmm0
1016bbbd:	f2 0f 10 dc          	movsd  xmm3,xmm4
1016bbc1:	f2 0f 5c e2          	subsd  xmm4,xmm2
1016bbc5:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bbc9:	66 0f 5c c2          	subpd  xmm0,xmm2
1016bbcd:	66 0f 28 35 70 dc 1e 	movapd xmm6,XMMWORD PTR ds:0x101edc70
1016bbd4:	10 
1016bbd5:	f2 0f 59 fc          	mulsd  xmm7,xmm4
1016bbd9:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016bbdd:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bbe1:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016bbe5:	f2 0f 5c da          	subsd  xmm3,xmm2
1016bbe9:	66 0f 28 10          	movapd xmm2,XMMWORD PTR [eax]
1016bbed:	f2 0f 5c cb          	subsd  xmm1,xmm3
1016bbf1:	66 0f 12 58 18       	movlpd xmm3,QWORD PTR [eax+0x18]
1016bbf6:	f2 0f 58 d3          	addsd  xmm2,xmm3
1016bbfa:	f2 0f 5c fa          	subsd  xmm7,xmm2
1016bbfe:	f2 0f 59 d4          	mulsd  xmm2,xmm4
1016bc02:	66 0f 59 f0          	mulpd  xmm6,xmm0
1016bc06:	f2 0f 59 dc          	mulsd  xmm3,xmm4
1016bc0a:	66 0f 59 d0          	mulpd  xmm2,xmm0
1016bc0e:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016bc12:	66 0f 58 2d 80 dc 1e 	addpd  xmm5,XMMWORD PTR ds:0x101edc80
1016bc19:	10 
1016bc1a:	f2 0f 59 20          	mulsd  xmm4,QWORD PTR [eax]
1016bc1e:	66 0f 58 35 60 dc 1e 	addpd  xmm6,XMMWORD PTR ds:0x101edc60
1016bc25:	10 
1016bc26:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bc2a:	f2 0f 10 c3          	movsd  xmm0,xmm3
1016bc2e:	f2 0f 58 58 08       	addsd  xmm3,QWORD PTR [eax+0x8]
1016bc33:	f2 0f 59 cf          	mulsd  xmm1,xmm7
1016bc37:	f2 0f 10 fc          	movsd  xmm7,xmm4
1016bc3b:	f2 0f 58 e3          	addsd  xmm4,xmm3
1016bc3f:	66 0f 58 f5          	addpd  xmm6,xmm5
1016bc43:	66 0f 12 68 08       	movlpd xmm5,QWORD PTR [eax+0x8]
1016bc48:	f2 0f 5c eb          	subsd  xmm5,xmm3
1016bc4c:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016bc50:	f2 0f 58 48 10       	addsd  xmm1,QWORD PTR [eax+0x10]
1016bc55:	66 0f 59 f2          	mulpd  xmm6,xmm2
1016bc59:	f2 0f 58 e8          	addsd  xmm5,xmm0
1016bc5d:	f2 0f 58 df          	addsd  xmm3,xmm7
1016bc61:	f2 0f 58 cd          	addsd  xmm1,xmm5
1016bc65:	f2 0f 58 cb          	addsd  xmm1,xmm3
1016bc69:	f2 0f 58 ce          	addsd  xmm1,xmm6
1016bc6d:	66 0f 15 f6          	unpckhpd xmm6,xmm6
1016bc71:	f2 0f 58 ce          	addsd  xmm1,xmm6
1016bc75:	f2 0f 58 e1          	addsd  xmm4,xmm1
1016bc79:	66 0f 28 c4          	movapd xmm0,xmm4
1016bc7d:	c3                   	ret
1016bc7e:	7f 1f                	jg     0x1016bc9f
1016bc80:	66 0f c5 c0 03       	pextrw eax,xmm0,0x3
1016bc85:	66 25 ff 7f          	and    ax,0x7fff
1016bc89:	66 0f c4 c0 03       	pinsrw xmm0,eax,0x3
1016bc8e:	66 0f 12 0d f0 dc 1e 	movlpd xmm1,QWORD PTR ds:0x101edcf0
1016bc95:	10 
1016bc96:	f2 0f 5c c8          	subsd  xmm1,xmm0
1016bc9a:	66 0f 28 c1          	movapd xmm0,xmm1
1016bc9e:	c3                   	ret
1016bc9f:	83 ec 08             	sub    esp,0x8
1016bca2:	66 0f d6 04 24       	movq   QWORD PTR [esp],xmm0
1016bca7:	e8 63 6c 01 00       	call   0x1018290f
1016bcac:	dd 1c 24             	fstp   QWORD PTR [esp]
1016bcaf:	f3 0f 7e 04 24       	movq   xmm0,QWORD PTR [esp]
1016bcb4:	83 c4 08             	add    esp,0x8
1016bcb7:	c3                   	ret
