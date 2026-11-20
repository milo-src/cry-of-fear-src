
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bea60 <.text+0xbda60>:
100bea60:	55                   	push   ebp
100bea61:	8b ec                	mov    ebp,esp
100bea63:	81 ec 88 00 00 00    	sub    esp,0x88
100bea69:	53                   	push   ebx
100bea6a:	56                   	push   esi
100bea6b:	8b f1                	mov    esi,ecx
100bea6d:	57                   	push   edi
100bea6e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bea71:	83 c0 50             	add    eax,0x50
100bea74:	50                   	push   eax
100bea75:	e8 a6 a8 05 00       	call   0x10119320
100bea7a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bea7f:	83 c4 04             	add    esp,0x4
100bea82:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100bea85:	33 ff                	xor    edi,edi
100bea87:	f3 0f 10 50 40       	movss  xmm2,DWORD PTR [eax+0x40]
100bea8c:	f3 0f 10 68 44       	movss  xmm5,DWORD PTR [eax+0x44]
100bea91:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bea94:	f3 0f 59 15 bc fe 1a 	mulss  xmm2,DWORD PTR ds:0x101afebc
100bea9b:	10 
100bea9c:	f3 0f 59 2d bc fe 1a 	mulss  xmm5,DWORD PTR ds:0x101afebc
100beaa3:	10 
100beaa4:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100beaa9:	66 0f d6 45 f4       	movq   QWORD PTR [ebp-0xc],xmm0
100beaae:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100beab1:	f3 0f 11 55 e4       	movss  DWORD PTR [ebp-0x1c],xmm2
100beab6:	f3 0f 11 6d e0       	movss  DWORD PTR [ebp-0x20],xmm5
100beabb:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100beabe:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
100beac3:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100beac6:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100beacb:	0f 57 f6             	xorps  xmm6,xmm6
100beace:	f3 0f 10 4d ec       	movss  xmm1,DWORD PTR [ebp-0x14]
100bead3:	f3 0f 58 c2          	addss  xmm0,xmm2
100bead7:	f3 0f 10 65 e8       	movss  xmm4,DWORD PTR [ebp-0x18]
100beadc:	f3 0f 5c cd          	subss  xmm1,xmm5
100beae0:	f3 0f 10 5d f0       	movss  xmm3,DWORD PTR [ebp-0x10]
100beae5:	f3 0f 5c e2          	subss  xmm4,xmm2
100beae9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100beaec:	f3 0f 5c de          	subss  xmm3,xmm6
100beaf0:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100beaf3:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100beaf8:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100beafd:	f3 0f 58 c5          	addss  xmm0,xmm5
100beb01:	f3 0f 11 4d ec       	movss  DWORD PTR [ebp-0x14],xmm1
100beb06:	f3 0f 11 65 e8       	movss  DWORD PTR [ebp-0x18],xmm4
100beb0b:	f3 0f 11 5d f0       	movss  DWORD PTR [ebp-0x10],xmm3
100beb10:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100beb15:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100beb1a:	f3 0f 58 c6          	addss  xmm0,xmm6
100beb1e:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100beb23:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
100beb2a:	00 
100beb2b:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
100beb32:	00 
100beb33:	f3 0f 58 c4          	addss  xmm0,xmm4
100beb37:	f3 0f 58 d1          	addss  xmm2,xmm1
100beb3b:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
100beb42:	00 
100beb43:	f3 0f 58 cb          	addss  xmm1,xmm3
100beb47:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
100beb4c:	f3 0f 10 03          	movss  xmm0,DWORD PTR [ebx]
100beb50:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
100beb54:	f3 0f 11 55 d8       	movss  DWORD PTR [ebp-0x28],xmm2
100beb59:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
100beb5e:	f3 0f 11 45 c8       	movss  DWORD PTR [ebp-0x38],xmm0
100beb63:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
100beb68:	f3 0f 58 43 04       	addss  xmm0,DWORD PTR [ebx+0x4]
100beb6d:	f3 0f 11 45 cc       	movss  DWORD PTR [ebp-0x34],xmm0
100beb72:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100beb77:	8d 8d 78 ff ff ff    	lea    ecx,[ebp-0x88]
100beb7d:	f3 0f 58 43 08       	addss  xmm0,DWORD PTR [ebx+0x8]
100beb82:	51                   	push   ecx
100beb83:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
100beb88:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100beb8e:	8d 45 d4             	lea    eax,[ebp-0x2c]
100beb91:	6a 01                	push   0x1
100beb93:	6a 01                	push   0x1
100beb95:	50                   	push   eax
100beb96:	8d 45 c8             	lea    eax,[ebp-0x38]
100beb99:	50                   	push   eax
100beb9a:	e8 81 bc 05 00       	call   0x1011a820
100beb9f:	f3 0f 10 45 88       	movss  xmm0,DWORD PTR [ebp-0x78]
100beba4:	83 c4 18             	add    esp,0x18
100beba7:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100bebae:	9f                   	lahf
100bebaf:	f6 c4 44             	test   ah,0x44
100bebb2:	7b 4d                	jnp    0x100bec01
100bebb4:	8b 06                	mov    eax,DWORD PTR [esi]
100bebb6:	8d 4d e8             	lea    ecx,[ebp-0x18]
100bebb9:	51                   	push   ecx
100bebba:	8b ce                	mov    ecx,esi
100bebbc:	ff 90 cc 01 00 00    	call   DWORD PTR [eax+0x1cc]
100bebc2:	85 c0                	test   eax,eax
100bebc4:	74 3b                	je     0x100bec01
100bebc6:	8b 16                	mov    edx,DWORD PTR [esi]
100bebc8:	8d 45 e8             	lea    eax,[ebp-0x18]
100bebcb:	6a 00                	push   0x0
100bebcd:	6a 00                	push   0x0
100bebcf:	50                   	push   eax
100bebd0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bebd3:	8b ce                	mov    ecx,esi
100bebd5:	83 c0 08             	add    eax,0x8
100bebd8:	50                   	push   eax
100bebd9:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100bebdf:	83 f8 02             	cmp    eax,0x2
100bebe2:	75 1d                	jne    0x100bec01
100bebe4:	8d 45 e8             	lea    eax,[ebp-0x18]
100bebe7:	50                   	push   eax
100bebe8:	51                   	push   ecx
100bebe9:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100bebf0:	8b ce                	mov    ecx,esi
100bebf2:	6a 04                	push   0x4
100bebf4:	e8 87 24 00 00       	call   0x100c1080
100bebf9:	85 c0                	test   eax,eax
100bebfb:	0f 85 f8 00 00 00    	jne    0x100becf9
100bec01:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bec04:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100bec07:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
100bec0e:	00 
100bec0f:	f3 0f 58 45 f4       	addss  xmm0,DWORD PTR [ebp-0xc]
100bec14:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
100bec1b:	00 
100bec1c:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
100bec23:	00 
100bec24:	f3 0f 58 55 f8       	addss  xmm2,DWORD PTR [ebp-0x8]
100bec29:	f3 0f 58 4d fc       	addss  xmm1,DWORD PTR [ebp-0x4]
100bec2e:	f3 0f 11 45 bc       	movss  DWORD PTR [ebp-0x44],xmm0
100bec33:	f3 0f 10 03          	movss  xmm0,DWORD PTR [ebx]
100bec37:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
100bec3b:	f3 0f 11 55 c0       	movss  DWORD PTR [ebp-0x40],xmm2
100bec40:	f3 0f 11 4d c4       	movss  DWORD PTR [ebp-0x3c],xmm1
100bec45:	f3 0f 11 45 b0       	movss  DWORD PTR [ebp-0x50],xmm0
100bec4a:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
100bec4f:	f3 0f 58 43 04       	addss  xmm0,DWORD PTR [ebx+0x4]
100bec54:	f3 0f 11 45 b4       	movss  DWORD PTR [ebp-0x4c],xmm0
100bec59:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100bec5e:	8d 8d 78 ff ff ff    	lea    ecx,[ebp-0x88]
100bec64:	f3 0f 58 43 08       	addss  xmm0,DWORD PTR [ebx+0x8]
100bec69:	51                   	push   ecx
100bec6a:	f3 0f 11 45 b8       	movss  DWORD PTR [ebp-0x48],xmm0
100bec6f:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bec75:	8d 45 bc             	lea    eax,[ebp-0x44]
100bec78:	6a 01                	push   0x1
100bec7a:	6a 01                	push   0x1
100bec7c:	50                   	push   eax
100bec7d:	8d 45 b0             	lea    eax,[ebp-0x50]
100bec80:	50                   	push   eax
100bec81:	e8 9a bb 05 00       	call   0x1011a820
100bec86:	f3 0f 10 45 88       	movss  xmm0,DWORD PTR [ebp-0x78]
100bec8b:	83 c4 18             	add    esp,0x18
100bec8e:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100bec95:	9f                   	lahf
100bec96:	f6 c4 44             	test   ah,0x44
100bec99:	7b 49                	jnp    0x100bece4
100bec9b:	8b 06                	mov    eax,DWORD PTR [esi]
100bec9d:	8d 4d f4             	lea    ecx,[ebp-0xc]
100beca0:	51                   	push   ecx
100beca1:	8b ce                	mov    ecx,esi
100beca3:	ff 90 cc 01 00 00    	call   DWORD PTR [eax+0x1cc]
100beca9:	85 c0                	test   eax,eax
100becab:	74 37                	je     0x100bece4
100becad:	8b 16                	mov    edx,DWORD PTR [esi]
100becaf:	8d 45 f4             	lea    eax,[ebp-0xc]
100becb2:	6a 00                	push   0x0
100becb4:	6a 00                	push   0x0
100becb6:	50                   	push   eax
100becb7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100becba:	8b ce                	mov    ecx,esi
100becbc:	83 c0 08             	add    eax,0x8
100becbf:	50                   	push   eax
100becc0:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100becc6:	83 f8 02             	cmp    eax,0x2
100becc9:	75 19                	jne    0x100bece4
100beccb:	8d 45 f4             	lea    eax,[ebp-0xc]
100becce:	50                   	push   eax
100beccf:	51                   	push   ecx
100becd0:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100becd7:	8b ce                	mov    ecx,esi
100becd9:	6a 04                	push   0x4
100becdb:	e8 a0 23 00 00       	call   0x100c1080
100bece0:	85 c0                	test   eax,eax
100bece2:	75 15                	jne    0x100becf9
100bece4:	47                   	inc    edi
100bece5:	83 ff 05             	cmp    edi,0x5
100bece8:	7d 1d                	jge    0x100bed07
100becea:	f3 0f 10 55 e4       	movss  xmm2,DWORD PTR [ebp-0x1c]
100becef:	f3 0f 10 6d e0       	movss  xmm5,DWORD PTR [ebp-0x20]
100becf4:	e9 cd fd ff ff       	jmp    0x100beac6
100becf9:	5f                   	pop    edi
100becfa:	5e                   	pop    esi
100becfb:	b8 01 00 00 00       	mov    eax,0x1
100bed00:	5b                   	pop    ebx
100bed01:	8b e5                	mov    esp,ebp
100bed03:	5d                   	pop    ebp
100bed04:	c2 08 00             	ret    0x8
100bed07:	5f                   	pop    edi
100bed08:	5e                   	pop    esi
100bed09:	33 c0                	xor    eax,eax
100bed0b:	5b                   	pop    ebx
100bed0c:	8b e5                	mov    esp,ebp
100bed0e:	5d                   	pop    ebp
100bed0f:	c2 08 00             	ret    0x8
