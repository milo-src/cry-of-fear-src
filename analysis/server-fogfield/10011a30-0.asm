
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10011a30 <.text+0x10a30>:
10011a30:	56                   	push   esi
10011a31:	57                   	push   edi
10011a32:	8b f9                	mov    edi,ecx
10011a34:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10011a37:	f3 0f 10 80 f8 00 00 	movss  xmm0,DWORD PTR [eax+0xf8]
10011a3e:	00 
10011a3f:	f3 0f 10 88 f4 00 00 	movss  xmm1,DWORD PTR [eax+0xf4]
10011a46:	00 
10011a47:	0f 2f c1             	comiss xmm0,xmm1
10011a4a:	77 03                	ja     0x10011a4f
10011a4c:	0f 28 c1             	movaps xmm0,xmm1
10011a4f:	f3 0f 5e 05 1c 47 1a 	divss  xmm0,DWORD PTR ds:0x101a471c
10011a56:	10 
10011a57:	f3 0f 2c f0          	cvttss2si esi,xmm0
10011a5b:	85 f6                	test   esi,esi
10011a5d:	7e 0d                	jle    0x10011a6c
10011a5f:	90                   	nop
10011a60:	8b cf                	mov    ecx,edi
10011a62:	e8 c9 e4 ff ff       	call   0x1000ff30
10011a67:	83 ee 01             	sub    esi,0x1
10011a6a:	75 f4                	jne    0x10011a60
10011a6c:	8b 07                	mov    eax,DWORD PTR [edi]
10011a6e:	51                   	push   ecx
10011a6f:	8b cf                	mov    ecx,edi
10011a71:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
10011a78:	ff 50 08             	call   DWORD PTR [eax+0x8]
10011a7b:	c7 47 78 30 1a 01 10 	mov    DWORD PTR [edi+0x78],0x10011a30
10011a82:	5f                   	pop    edi
10011a83:	5e                   	pop    esi
10011a84:	c3                   	ret
