
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cde50 <.text+0xcce50>:
100cde50:	55                   	push   ebp
100cde51:	8b ec                	mov    ebp,esp
100cde53:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cde56:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100cde59:	83 b9 08 01 00 00 05 	cmp    DWORD PTR [ecx+0x108],0x5
100cde60:	75 09                	jne    0x100cde6b
100cde62:	b8 03 00 00 00       	mov    eax,0x3
100cde67:	5d                   	pop    ebp
100cde68:	c2 04 00             	ret    0x4
100cde6b:	f3 0f 10 99 dc 00 00 	movss  xmm3,DWORD PTR [ecx+0xdc]
100cde72:	00 
100cde73:	0f 57 d2             	xorps  xmm2,xmm2
100cde76:	f3 0f 10 0d 48 76 1d 	movss  xmm1,DWORD PTR ds:0x101d7648
100cde7d:	10 
100cde7e:	0f 2e d9             	ucomiss xmm3,xmm1
100cde81:	9f                   	lahf
100cde82:	f6 c4 44             	test   ah,0x44
100cde85:	7a 28                	jp     0x100cdeaf
100cde87:	f3 0f 10 81 e0 00 00 	movss  xmm0,DWORD PTR [ecx+0xe0]
100cde8e:	00 
100cde8f:	0f 2e c1             	ucomiss xmm0,xmm1
100cde92:	9f                   	lahf
100cde93:	f6 c4 44             	test   ah,0x44
100cde96:	7a 17                	jp     0x100cdeaf
100cde98:	f3 0f 10 81 e4 00 00 	movss  xmm0,DWORD PTR [ecx+0xe4]
100cde9f:	00 
100cdea0:	0f 2e c2             	ucomiss xmm0,xmm2
100cdea3:	9f                   	lahf
100cdea4:	f6 c4 44             	test   ah,0x44
100cdea7:	7a 06                	jp     0x100cdeaf
100cdea9:	33 c0                	xor    eax,eax
100cdeab:	5d                   	pop    ebp
100cdeac:	c2 04 00             	ret    0x4
100cdeaf:	0f 2e d9             	ucomiss xmm3,xmm1
100cdeb2:	9f                   	lahf
100cdeb3:	f6 c4 44             	test   ah,0x44
100cdeb6:	7a 22                	jp     0x100cdeda
100cdeb8:	f3 0f 10 81 e0 00 00 	movss  xmm0,DWORD PTR [ecx+0xe0]
100cdebf:	00 
100cdec0:	0f 2e c1             	ucomiss xmm0,xmm1
100cdec3:	9f                   	lahf
100cdec4:	f6 c4 44             	test   ah,0x44
100cdec7:	7a 11                	jp     0x100cdeda
100cdec9:	f3 0f 10 81 e4 00 00 	movss  xmm0,DWORD PTR [ecx+0xe4]
100cded0:	00 
100cded1:	0f 2e c2             	ucomiss xmm0,xmm2
100cded4:	9f                   	lahf
100cded5:	f6 c4 44             	test   ah,0x44
100cded8:	7b 38                	jnp    0x100cdf12
100cdeda:	f3 0f 10 0d 4c 76 1d 	movss  xmm1,DWORD PTR ds:0x101d764c
100cdee1:	10 
100cdee2:	0f 2e d9             	ucomiss xmm3,xmm1
100cdee5:	9f                   	lahf
100cdee6:	f6 c4 44             	test   ah,0x44
100cdee9:	7a 27                	jp     0x100cdf12
100cdeeb:	f3 0f 10 81 e0 00 00 	movss  xmm0,DWORD PTR [ecx+0xe0]
100cdef2:	00 
100cdef3:	0f 2e c1             	ucomiss xmm0,xmm1
100cdef6:	9f                   	lahf
100cdef7:	f6 c4 44             	test   ah,0x44
100cdefa:	7a 16                	jp     0x100cdf12
100cdefc:	f3 0f 10 81 e4 00 00 	movss  xmm0,DWORD PTR [ecx+0xe4]
100cdf03:	00 
100cdf04:	0f 2e c2             	ucomiss xmm0,xmm2
100cdf07:	9f                   	lahf
100cdf08:	f6 c4 44             	test   ah,0x44
100cdf0b:	b8 02 00 00 00       	mov    eax,0x2
100cdf10:	7b 05                	jnp    0x100cdf17
100cdf12:	b8 01 00 00 00       	mov    eax,0x1
100cdf17:	5d                   	pop    ebp
100cdf18:	c2 04 00             	ret    0x4
