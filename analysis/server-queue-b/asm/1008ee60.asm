
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ee60 <.text+0x8de60>:
1008ee60:	55                   	push   ebp
1008ee61:	8b ec                	mov    ebp,esp
1008ee63:	83 ec 0c             	sub    esp,0xc
1008ee66:	56                   	push   esi
1008ee67:	8b f1                	mov    esi,ecx
1008ee69:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008ee6c:	e8 0f 3d 07 00       	call   0x10102b80
1008ee71:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ee74:	c7 80 0c 01 00 00 04 	mov    DWORD PTR [eax+0x10c],0x4
1008ee7b:	00 00 00 
1008ee7e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ee81:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
1008ee88:	00 00 00 
1008ee8b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ee8e:	83 c0 08             	add    eax,0x8
1008ee91:	50                   	push   eax
1008ee92:	56                   	push   esi
1008ee93:	e8 48 b1 08 00       	call   0x10119fe0
1008ee98:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008ee9b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008eea0:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
1008eea6:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008eeac:	51                   	push   ecx
1008eead:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008eeb3:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1008eeb9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008eebc:	83 c4 14             	add    esp,0x14
1008eebf:	f3 0f 10 35 80 13 1a 	movss  xmm6,DWORD PTR ds:0x101a1380
1008eec6:	10 
1008eec7:	f3 0f 10 81 e4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1e4]
1008eece:	00 
1008eecf:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008eed6:	9f                   	lahf
1008eed7:	f6 c4 44             	test   ah,0x44
1008eeda:	7a 0d                	jp     0x1008eee9
1008eedc:	c7 81 e4 01 00 00 00 	mov    DWORD PTR [ecx+0x1e4],0x40000000
1008eee3:	00 00 40 
1008eee6:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008eee9:	c7 86 84 01 00 00 00 	mov    DWORD PTR [esi+0x184],0x0
1008eef0:	00 00 00 
1008eef3:	f3 0f 7e 41 08       	movq   xmm0,QWORD PTR [ecx+0x8]
1008eef8:	66 0f d6 86 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm0
1008eeff:	00 
1008ef00:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
1008ef03:	89 86 24 01 00 00    	mov    DWORD PTR [esi+0x124],eax
1008ef09:	f3 0f 10 81 f4 00 00 	movss  xmm0,DWORD PTR [ecx+0xf4]
1008ef10:	00 
1008ef11:	f3 0f 10 69 44       	movss  xmm5,DWORD PTR [ecx+0x44]
1008ef16:	f3 0f 5c c6          	subss  xmm0,xmm6
1008ef1a:	f3 0f 10 61 48       	movss  xmm4,DWORD PTR [ecx+0x48]
1008ef1f:	f2 0f 10 0d 90 1f 1a 	movsd  xmm1,QWORD PTR ds:0x101a1f90
1008ef26:	10 
1008ef27:	f3 0f 10 59 4c       	movss  xmm3,DWORD PTR [ecx+0x4c]
1008ef2c:	f3 0f 59 c5          	mulss  xmm0,xmm5
1008ef30:	0f 5a d0             	cvtps2pd xmm2,xmm0
1008ef33:	f3 0f 10 81 f8 00 00 	movss  xmm0,DWORD PTR [ecx+0xf8]
1008ef3a:	00 
1008ef3b:	f3 0f 5c c6          	subss  xmm0,xmm6
1008ef3f:	0f 54 d1             	andps  xmm2,xmm1
1008ef42:	f3 0f 59 c4          	mulss  xmm0,xmm4
1008ef46:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008ef49:	0f 54 c1             	andps  xmm0,xmm1
1008ef4c:	f2 0f 58 d0          	addsd  xmm2,xmm0
1008ef50:	f3 0f 10 81 fc 00 00 	movss  xmm0,DWORD PTR [ecx+0xfc]
1008ef57:	00 
1008ef58:	f3 0f 5c c6          	subss  xmm0,xmm6
1008ef5c:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008ef60:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008ef63:	0f 54 c1             	andps  xmm0,xmm1
1008ef66:	f2 0f 58 d0          	addsd  xmm2,xmm0
1008ef6a:	f3 0f 10 86 10 01 00 	movss  xmm0,DWORD PTR [esi+0x110]
1008ef71:	00 
1008ef72:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008ef75:	f2 0f 5c d0          	subsd  xmm2,xmm0
1008ef79:	66 0f 5a c2          	cvtpd2ps xmm0,xmm2
1008ef7d:	f3 0f 59 e8          	mulss  xmm5,xmm0
1008ef81:	f3 0f 59 e0          	mulss  xmm4,xmm0
1008ef85:	f3 0f 58 ae 1c 01 00 	addss  xmm5,DWORD PTR [esi+0x11c]
1008ef8c:	00 
1008ef8d:	f3 0f 59 d8          	mulss  xmm3,xmm0
1008ef91:	f3 0f 58 a6 20 01 00 	addss  xmm4,DWORD PTR [esi+0x120]
1008ef98:	00 
1008ef99:	f3 0f 58 9e 24 01 00 	addss  xmm3,DWORD PTR [esi+0x124]
1008efa0:	00 
1008efa1:	0f 14 ec             	unpcklps xmm5,xmm4
1008efa4:	66 0f d6 ae 28 01 00 	movq   QWORD PTR [esi+0x128],xmm5
1008efab:	00 
1008efac:	f3 0f 11 5d fc       	movss  DWORD PTR [ebp-0x4],xmm3
1008efb1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008efb4:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1008efba:	f6 81 a4 01 00 00 01 	test   BYTE PTR [ecx+0x1a4],0x1
1008efc1:	74 74                	je     0x1008f037
1008efc3:	8b 86 28 01 00 00    	mov    eax,DWORD PTR [esi+0x128]
1008efc9:	83 ec 0c             	sub    esp,0xc
1008efcc:	8b cc                	mov    ecx,esp
1008efce:	56                   	push   esi
1008efcf:	89 01                	mov    DWORD PTR [ecx],eax
1008efd1:	8b 86 2c 01 00 00    	mov    eax,DWORD PTR [esi+0x12c]
1008efd7:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008efda:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
1008efe0:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008efe3:	e8 68 55 03 00       	call   0x100c4550
1008efe8:	f3 0f 10 8e 28 01 00 	movss  xmm1,DWORD PTR [esi+0x128]
1008efef:	00 
1008eff0:	83 c4 10             	add    esp,0x10
1008eff3:	f3 0f 10 96 2c 01 00 	movss  xmm2,DWORD PTR [esi+0x12c]
1008effa:	00 
1008effb:	f3 0f 10 9e 30 01 00 	movss  xmm3,DWORD PTR [esi+0x130]
1008f002:	00 
1008f003:	f3 0f 7e 86 1c 01 00 	movq   xmm0,QWORD PTR [esi+0x11c]
1008f00a:	00 
1008f00b:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
1008f011:	66 0f d6 86 28 01 00 	movq   QWORD PTR [esi+0x128],xmm0
1008f018:	00 
1008f019:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1008f01f:	f3 0f 11 8e 1c 01 00 	movss  DWORD PTR [esi+0x11c],xmm1
1008f026:	00 
1008f027:	f3 0f 11 96 20 01 00 	movss  DWORD PTR [esi+0x120],xmm2
1008f02e:	00 
1008f02f:	f3 0f 11 9e 24 01 00 	movss  DWORD PTR [esi+0x124],xmm3
1008f036:	00 
1008f037:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1008f03a:	85 c9                	test   ecx,ecx
1008f03c:	0f 84 86 00 00 00    	je     0x1008f0c8
1008f042:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1008f045:	f3 0f 10 96 1c 01 00 	movss  xmm2,DWORD PTR [esi+0x11c]
1008f04c:	00 
1008f04d:	f3 0f 10 8e 20 01 00 	movss  xmm1,DWORD PTR [esi+0x120]
1008f054:	00 
1008f055:	f3 0f 10 86 24 01 00 	movss  xmm0,DWORD PTR [esi+0x124]
1008f05c:	00 
1008f05d:	f3 0f 5c 50 08       	subss  xmm2,DWORD PTR [eax+0x8]
1008f062:	f3 0f 5c 48 0c       	subss  xmm1,DWORD PTR [eax+0xc]
1008f067:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1008f06c:	0f 14 d1             	unpcklps xmm2,xmm1
1008f06f:	66 0f d6 96 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm2
1008f076:	00 
1008f077:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008f07c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008f07f:	89 86 24 01 00 00    	mov    DWORD PTR [esi+0x124],eax
1008f085:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1008f088:	f3 0f 10 96 28 01 00 	movss  xmm2,DWORD PTR [esi+0x128]
1008f08f:	00 
1008f090:	f3 0f 10 8e 2c 01 00 	movss  xmm1,DWORD PTR [esi+0x12c]
1008f097:	00 
1008f098:	f3 0f 10 86 30 01 00 	movss  xmm0,DWORD PTR [esi+0x130]
1008f09f:	00 
1008f0a0:	f3 0f 5c 50 08       	subss  xmm2,DWORD PTR [eax+0x8]
1008f0a5:	f3 0f 5c 48 0c       	subss  xmm1,DWORD PTR [eax+0xc]
1008f0aa:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1008f0af:	0f 14 d1             	unpcklps xmm2,xmm1
1008f0b2:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008f0b7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008f0ba:	66 0f d6 96 28 01 00 	movq   QWORD PTR [esi+0x128],xmm2
1008f0c1:	00 
1008f0c2:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
1008f0c8:	8b 06                	mov    eax,DWORD PTR [esi]
1008f0ca:	8b ce                	mov    ecx,esi
1008f0cc:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
1008f0d3:	ff 50 30             	call   DWORD PTR [eax+0x30]
1008f0d6:	5e                   	pop    esi
1008f0d7:	8b e5                	mov    esp,ebp
1008f0d9:	5d                   	pop    ebp
1008f0da:	c3                   	ret
