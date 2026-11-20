
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000a590 <.text+0x9590>:
1000a590:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a596:	f3 0f 10 89 cc 00 00 	movss  xmm1,DWORD PTR [ecx+0xcc]
1000a59d:	00 
1000a59e:	8d 91 cc 00 00 00    	lea    edx,[ecx+0xcc]
1000a5a4:	f3 0f 10 05 44 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f44
1000a5ab:	10 
1000a5ac:	0f 2f c8             	comiss xmm1,xmm0
1000a5af:	76 0f                	jbe    0x1000a5c0
1000a5b1:	c7 02 00 40 1c 46    	mov    DWORD PTR [edx],0x461c4000
1000a5b7:	0f 28 c8             	movaps xmm1,xmm0
1000a5ba:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a5c0:	0f 57 d2             	xorps  xmm2,xmm2
1000a5c3:	0f 2e ca             	ucomiss xmm1,xmm2
1000a5c6:	9f                   	lahf
1000a5c7:	f6 c4 44             	test   ah,0x44
1000a5ca:	7b 57                	jnp    0x1000a623
1000a5cc:	0f b6 81 5a 54 04 00 	movzx  eax,BYTE PTR [ecx+0x4545a]
1000a5d3:	66 0f 6e c0          	movd   xmm0,eax
1000a5d7:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000a5da:	f3 0f 5c c8          	subss  xmm1,xmm0
1000a5de:	0f 2f d1             	comiss xmm2,xmm1
1000a5e1:	f3 0f 11 0a          	movss  DWORD PTR [edx],xmm1
1000a5e5:	77 0f                	ja     0x1000a5f6
1000a5e7:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a5ed:	83 b9 e4 00 00 00 00 	cmp    DWORD PTR [ecx+0xe4],0x0
1000a5f4:	75 1b                	jne    0x1000a611
1000a5f6:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
1000a5fc:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a601:	81 a0 b8 00 00 00 ff 	and    DWORD PTR [eax+0xb8],0xfffff7ff
1000a608:	f7 ff ff 
1000a60b:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a611:	8b 41 68             	mov    eax,DWORD PTR [ecx+0x68]
1000a614:	89 41 5c             	mov    DWORD PTR [ecx+0x5c],eax
1000a617:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a61d:	8b 41 6c             	mov    eax,DWORD PTR [ecx+0x6c]
1000a620:	89 41 60             	mov    DWORD PTR [ecx+0x60],eax
1000a623:	c3                   	ret
