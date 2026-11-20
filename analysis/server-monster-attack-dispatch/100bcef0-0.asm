
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bcef0 <.text+0xbbef0>:
100bcef0:	55                   	push   ebp
100bcef1:	8b ec                	mov    ebp,esp
100bcef3:	83 e4 f8             	and    esp,0xfffffff8
100bcef6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bcefb:	83 ec 08             	sub    esp,0x8
100bcefe:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100bcf04:	56                   	push   esi
100bcf05:	8b f1                	mov    esi,ecx
100bcf07:	b9 0c 22 1a 10       	mov    ecx,0x101a220c
100bcf0c:	57                   	push   edi
100bcf0d:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100bcf10:	03 07                	add    eax,DWORD PTR [edi]
100bcf12:	8a 10                	mov    dl,BYTE PTR [eax]
100bcf14:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bcf16:	75 1a                	jne    0x100bcf32
100bcf18:	84 d2                	test   dl,dl
100bcf1a:	74 12                	je     0x100bcf2e
100bcf1c:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bcf1f:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bcf22:	75 0e                	jne    0x100bcf32
100bcf24:	83 c0 02             	add    eax,0x2
100bcf27:	83 c1 02             	add    ecx,0x2
100bcf2a:	84 d2                	test   dl,dl
100bcf2c:	75 e4                	jne    0x100bcf12
100bcf2e:	33 c0                	xor    eax,eax
100bcf30:	eb 05                	jmp    0x100bcf37
100bcf32:	1b c0                	sbb    eax,eax
100bcf34:	83 c8 01             	or     eax,0x1
100bcf37:	85 c0                	test   eax,eax
100bcf39:	75 0d                	jne    0x100bcf48
100bcf3b:	83 bf 10 01 00 00 01 	cmp    DWORD PTR [edi+0x110],0x1
100bcf42:	0f 84 af 01 00 00    	je     0x100bd0f7
100bcf48:	8d 47 50             	lea    eax,[edi+0x50]
100bcf4b:	50                   	push   eax
100bcf4c:	e8 cf c3 05 00       	call   0x10119320
100bcf51:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100bcf54:	83 c4 04             	add    esp,0x4
100bcf57:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bcf5a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bcf5d:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100bcf62:	f3 0f 5c 41 08       	subss  xmm0,DWORD PTR [ecx+0x8]
100bcf67:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100bcf6c:	f3 0f 5c 51 0c       	subss  xmm2,DWORD PTR [ecx+0xc]
100bcf71:	0f 28 c8             	movaps xmm1,xmm0
100bcf74:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100bcf7a:	f3 0f 59 c8          	mulss  xmm1,xmm0
100bcf7e:	0f 28 c2             	movaps xmm0,xmm2
100bcf81:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100bcf87:	f3 0f 59 c2          	mulss  xmm0,xmm2
100bcf8b:	f3 0f 58 c8          	addss  xmm1,xmm0
100bcf8f:	0f 5a c1             	cvtps2pd xmm0,xmm1
100bcf92:	0f 57 c9             	xorps  xmm1,xmm1
100bcf95:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bcf99:	77 06                	ja     0x100bcfa1
100bcf9b:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bcf9f:	eb 05                	jmp    0x100bcfa6
100bcfa1:	e8 ea ee 0a 00       	call   0x1016be90
100bcfa6:	0f 57 c9             	xorps  xmm1,xmm1
100bcfa9:	0f 57 d2             	xorps  xmm2,xmm2
100bcfac:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100bcfb0:	0f 2e ca             	ucomiss xmm1,xmm2
100bcfb3:	9f                   	lahf
100bcfb4:	f6 c4 44             	test   ah,0x44
100bcfb7:	7a 05                	jp     0x100bcfbe
100bcfb9:	0f 57 db             	xorps  xmm3,xmm3
100bcfbc:	eb 20                	jmp    0x100bcfde
100bcfbe:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100bcfc5:	10 
100bcfc6:	f3 0f 5e c1          	divss  xmm0,xmm1
100bcfca:	f3 0f 10 54 24 08    	movss  xmm2,DWORD PTR [esp+0x8]
100bcfd0:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
100bcfd6:	f3 0f 59 d0          	mulss  xmm2,xmm0
100bcfda:	f3 0f 59 d8          	mulss  xmm3,xmm0
100bcfde:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bcfe3:	f3 0f 10 48 2c       	movss  xmm1,DWORD PTR [eax+0x2c]
100bcfe8:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100bcfed:	81 a6 80 01 00 00 ff 	and    DWORD PTR [esi+0x180],0xffffc3ff
100bcff4:	c3 ff ff 
100bcff7:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x800
100bcffe:	08 00 00 
100bd001:	f3 0f 59 cb          	mulss  xmm1,xmm3
100bd005:	f3 0f 59 c2          	mulss  xmm0,xmm2
100bd009:	f3 0f 58 c8          	addss  xmm1,xmm0
100bd00d:	f3 0f 11 4c 24 08    	movss  DWORD PTR [esp+0x8],xmm1
100bd013:	74 31                	je     0x100bd046
100bd015:	8b 06                	mov    eax,DWORD PTR [esi]
100bd017:	83 ec 08             	sub    esp,0x8
100bd01a:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100bd01f:	8b ce                	mov    ecx,esi
100bd021:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bd027:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100bd02c:	ff 90 70 01 00 00    	call   DWORD PTR [eax+0x170]
100bd032:	f3 0f 10 4c 24 08    	movss  xmm1,DWORD PTR [esp+0x8]
100bd038:	85 c0                	test   eax,eax
100bd03a:	74 0a                	je     0x100bd046
100bd03c:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x400
100bd043:	04 00 00 
100bd046:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x1000
100bd04d:	10 00 00 
100bd050:	74 2b                	je     0x100bd07d
100bd052:	8b 06                	mov    eax,DWORD PTR [esi]
100bd054:	83 ec 08             	sub    esp,0x8
100bd057:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100bd05c:	8b ce                	mov    ecx,esi
100bd05e:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bd064:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100bd069:	ff 90 74 01 00 00    	call   DWORD PTR [eax+0x174]
100bd06f:	85 c0                	test   eax,eax
100bd071:	74 0a                	je     0x100bd07d
100bd073:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x1000
100bd07a:	10 00 00 
100bd07d:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x2000
100bd084:	20 00 00 
100bd087:	74 31                	je     0x100bd0ba
100bd089:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100bd08e:	83 ec 08             	sub    esp,0x8
100bd091:	8b 06                	mov    eax,DWORD PTR [esi]
100bd093:	8b ce                	mov    ecx,esi
100bd095:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bd09b:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100bd0a1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bd0a6:	ff 90 78 01 00 00    	call   DWORD PTR [eax+0x178]
100bd0ac:	85 c0                	test   eax,eax
100bd0ae:	74 0a                	je     0x100bd0ba
100bd0b0:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x800
100bd0b7:	08 00 00 
100bd0ba:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x4000
100bd0c1:	40 00 00 
100bd0c4:	74 31                	je     0x100bd0f7
100bd0c6:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100bd0cb:	83 ec 08             	sub    esp,0x8
100bd0ce:	8b 06                	mov    eax,DWORD PTR [esi]
100bd0d0:	8b ce                	mov    ecx,esi
100bd0d2:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bd0d8:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100bd0de:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bd0e3:	ff 90 7c 01 00 00    	call   DWORD PTR [eax+0x17c]
100bd0e9:	85 c0                	test   eax,eax
100bd0eb:	74 0a                	je     0x100bd0f7
100bd0ed:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x2000
100bd0f4:	20 00 00 
100bd0f7:	5f                   	pop    edi
100bd0f8:	5e                   	pop    esi
100bd0f9:	8b e5                	mov    esp,ebp
100bd0fb:	5d                   	pop    ebp
100bd0fc:	c2 08 00             	ret    0x8
