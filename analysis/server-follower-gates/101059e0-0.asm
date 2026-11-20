
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101059e0 <.text+0x1049e0>:
101059e0:	55                   	push   ebp
101059e1:	8b ec                	mov    ebp,esp
101059e3:	83 ec 18             	sub    esp,0x18
101059e6:	53                   	push   ebx
101059e7:	56                   	push   esi
101059e8:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101059eb:	8b d9                	mov    ebx,ecx
101059ed:	57                   	push   edi
101059ee:	8b 06                	mov    eax,DWORD PTR [esi]
101059f0:	83 c0 b0             	add    eax,0xffffffb0
101059f3:	83 f8 1b             	cmp    eax,0x1b
101059f6:	0f 87 58 03 00 00    	ja     0x10105d54
101059fc:	0f b6 80 9c 5d 10 10 	movzx  eax,BYTE PTR [eax+0x10105d9c]
10105a03:	ff 24 85 64 5d 10 10 	jmp    DWORD PTR [eax*4+0x10105d64]
10105a0a:	e8 e1 e7 ff ff       	call   0x101041f0
10105a0f:	f7 83 80 01 00 00 00 	test   DWORD PTR [ebx+0x180],0x40000000
10105a16:	00 00 40 
10105a19:	0f 85 3b 03 00 00    	jne    0x10105d5a
10105a1f:	c7 83 2c 02 00 00 04 	mov    DWORD PTR [ebx+0x22c],0x4
10105a26:	00 00 00 
10105a29:	5f                   	pop    edi
10105a2a:	5e                   	pop    esi
10105a2b:	5b                   	pop    ebx
10105a2c:	8b e5                	mov    esp,ebp
10105a2e:	5d                   	pop    ebp
10105a2f:	c2 04 00             	ret    0x4
10105a32:	e8 89 f4 ff ff       	call   0x10104ec0
10105a37:	eb d6                	jmp    0x10105a0f
10105a39:	e8 d2 e6 ff ff       	call   0x10104110
10105a3e:	eb cf                	jmp    0x10105a0f
10105a40:	e8 fb ea ff ff       	call   0x10104540
10105a45:	eb c8                	jmp    0x10105a0f
10105a47:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105a4c:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
10105a51:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
10105a55:	f3 0f 11 83 0c 02 00 	movss  DWORD PTR [ebx+0x20c],xmm0
10105a5c:	00 
10105a5d:	5f                   	pop    edi
10105a5e:	5e                   	pop    esi
10105a5f:	5b                   	pop    ebx
10105a60:	8b e5                	mov    esp,ebp
10105a62:	5d                   	pop    ebp
10105a63:	c2 04 00             	ret    0x4
10105a66:	8d 8b e0 03 00 00    	lea    ecx,[ebx+0x3e0]
10105a6c:	e8 0f 1d f1 ff       	call   0x10017780
10105a71:	85 c0                	test   eax,eax
10105a73:	74 9a                	je     0x10105a0f
10105a75:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10105a78:	8d 8b e0 03 00 00    	lea    ecx,[ebx+0x3e0]
10105a7e:	83 ec 0c             	sub    esp,0xc
10105a81:	8b fc                	mov    edi,esp
10105a83:	c7 80 b0 00 00 00 00 	mov    DWORD PTR [eax+0xb0],0x42700000
10105a8a:	00 70 42 
10105a8d:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
10105a90:	e8 0b 1d f1 ff       	call   0x100177a0
10105a95:	8b cb                	mov    ecx,ebx
10105a97:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10105a9a:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
10105a9f:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
10105aa4:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
10105aa9:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
10105aae:	f3 0f 5c 4e 10       	subss  xmm1,DWORD PTR [esi+0x10]
10105ab3:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
10105ab8:	f3 0f 11 57 04       	movss  DWORD PTR [edi+0x4],xmm2
10105abd:	f3 0f 11 4f 08       	movss  DWORD PTR [edi+0x8],xmm1
10105ac2:	f3 0f 11 07          	movss  DWORD PTR [edi],xmm0
10105ac6:	e8 95 cc fb ff       	call   0x100c2760
10105acb:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10105ace:	f3 0f 10 1d cc 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13cc
10105ad5:	10 
10105ad6:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10105ad9:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10105ade:	f3 0f 10 50 54       	movss  xmm2,DWORD PTR [eax+0x54]
10105ae3:	f3 0f 5c ca          	subss  xmm1,xmm2
10105ae7:	0f 2f 0d c4 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a13c4
10105aee:	76 04                	jbe    0x10105af4
10105af0:	f3 0f 5c cb          	subss  xmm1,xmm3
10105af4:	f3 0f 10 05 d4 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13d4
10105afb:	10 
10105afc:	0f 2f c1             	comiss xmm0,xmm1
10105aff:	76 04                	jbe    0x10105b05
10105b01:	f3 0f 58 cb          	addss  xmm1,xmm3
10105b05:	0f 57 c0             	xorps  xmm0,xmm0
10105b08:	0f 2f c1             	comiss xmm0,xmm1
10105b0b:	76 1d                	jbe    0x10105b2a
10105b0d:	f3 0f 58 0d b8 22 1a 	addss  xmm1,DWORD PTR ds:0x101a22b8
10105b14:	10 
10105b15:	f3 0f 5d c8          	minss  xmm1,xmm0
10105b19:	f3 0f 58 ca          	addss  xmm1,xmm2
10105b1d:	f3 0f 11 88 ac 00 00 	movss  DWORD PTR [eax+0xac],xmm1
10105b24:	00 
10105b25:	e9 e5 fe ff ff       	jmp    0x10105a0f
10105b2a:	f3 0f 5c 0d b8 22 1a 	subss  xmm1,DWORD PTR ds:0x101a22b8
10105b31:	10 
10105b32:	f3 0f 5f c8          	maxss  xmm1,xmm0
10105b36:	f3 0f 58 ca          	addss  xmm1,xmm2
10105b3a:	f3 0f 11 88 ac 00 00 	movss  DWORD PTR [eax+0xac],xmm1
10105b41:	00 
10105b42:	e9 c8 fe ff ff       	jmp    0x10105a0f
10105b47:	6a 00                	push   0x0
10105b49:	8d 8b e0 03 00 00    	lea    ecx,[ebx+0x3e0]
10105b4f:	e8 ec 1b f1 ff       	call   0x10017740
10105b54:	e9 b6 fe ff ff       	jmp    0x10105a0f
10105b59:	8b 33                	mov    esi,DWORD PTR [ebx]
10105b5b:	83 ec 10             	sub    esp,0x10
10105b5e:	c7 44 24 0c cd cc 4c 	mov    DWORD PTR [esp+0xc],0x3f4ccccd
10105b65:	3f 
10105b66:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10105b6d:	3f 
10105b6e:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10105b75:	40 
10105b76:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10105b7d:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10105b83:	83 c4 04             	add    esp,0x4
10105b86:	8b cb                	mov    ecx,ebx
10105b88:	d9 1c 24             	fstp   DWORD PTR [esp]
10105b8b:	ff b3 94 03 00 00    	push   DWORD PTR [ebx+0x394]
10105b91:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10105b97:	e9 73 fe ff ff       	jmp    0x10105a0f
10105b9c:	8b 03                	mov    eax,DWORD PTR [ebx]
10105b9e:	6a 01                	push   0x1
10105ba0:	6a 00                	push   0x0
10105ba2:	ff 90 40 02 00 00    	call   DWORD PTR [eax+0x240]
10105ba8:	8b 33                	mov    esi,DWORD PTR [ebx]
10105baa:	83 ec 10             	sub    esp,0x10
10105bad:	c7 44 24 0c cd cc 4c 	mov    DWORD PTR [esp+0xc],0x3f4ccccd
10105bb4:	3f 
10105bb5:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10105bbc:	3f 
10105bbd:	c7 44 24 04 00 00 20 	mov    DWORD PTR [esp+0x4],0x40200000
10105bc4:	40 
10105bc5:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10105bcc:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10105bd2:	83 c4 04             	add    esp,0x4
10105bd5:	8b cb                	mov    ecx,ebx
10105bd7:	d9 1c 24             	fstp   DWORD PTR [esp]
10105bda:	ff b3 90 03 00 00    	push   DWORD PTR [ebx+0x390]
10105be0:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10105be6:	e9 24 fe ff ff       	jmp    0x10105a0f
10105beb:	c7 83 d0 02 00 00 03 	mov    DWORD PTR [ebx+0x2d0],0x3
10105bf2:	00 00 00 
10105bf5:	5f                   	pop    edi
10105bf6:	5e                   	pop    esi
10105bf7:	5b                   	pop    ebx
10105bf8:	8b e5                	mov    esp,ebp
10105bfa:	5d                   	pop    ebp
10105bfb:	c2 04 00             	ret    0x4
10105bfe:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10105c01:	6a 00                	push   0x0
10105c03:	6a 00                	push   0x0
10105c05:	f3 0f 10 40 50       	movss  xmm0,DWORD PTR [eax+0x50]
10105c0a:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10105c0f:	f3 0f 10 40 58       	movss  xmm0,DWORD PTR [eax+0x58]
10105c14:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10105c19:	f3 0f 10 80 ac 00 00 	movss  xmm0,DWORD PTR [eax+0xac]
10105c20:	00 
10105c21:	8d 45 e8             	lea    eax,[ebp-0x18]
10105c24:	f3 0f 58 05 c4 13 1a 	addss  xmm0,DWORD PTR ds:0x101a13c4
10105c2b:	10 
10105c2c:	50                   	push   eax
10105c2d:	8d 45 f4             	lea    eax,[ebp-0xc]
10105c30:	50                   	push   eax
10105c31:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10105c36:	ff 15 98 2f 22 10    	call   DWORD PTR ds:0x10222f98
10105c3c:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
10105c41:	83 c4 10             	add    esp,0x10
10105c44:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10105c47:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
10105c4c:	f3 0f 10 5d ec       	movss  xmm3,DWORD PTR [ebp-0x14]
10105c51:	f3 0f 10 65 f0       	movss  xmm4,DWORD PTR [ebp-0x10]
10105c56:	f3 0f 10 50 08       	movss  xmm2,DWORD PTR [eax+0x8]
10105c5b:	f3 0f 59 c8          	mulss  xmm1,xmm0
10105c5f:	f3 0f 59 d8          	mulss  xmm3,xmm0
10105c63:	f3 0f 59 e0          	mulss  xmm4,xmm0
10105c67:	f3 0f 58 d1          	addss  xmm2,xmm1
10105c6b:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
10105c70:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10105c75:	f3 0f 58 cb          	addss  xmm1,xmm3
10105c79:	8d 45 f4             	lea    eax,[ebp-0xc]
10105c7c:	50                   	push   eax
10105c7d:	f3 0f 58 c4          	addss  xmm0,xmm4
10105c81:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
10105c86:	51                   	push   ecx
10105c87:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10105c8e:	8b cb                	mov    ecx,ebx
10105c90:	6a 03                	push   0x3
10105c92:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
10105c97:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10105c9c:	e8 df b3 fb ff       	call   0x100c1080
10105ca1:	85 c0                	test   eax,eax
10105ca3:	0f 85 66 fd ff ff    	jne    0x10105a0f
10105ca9:	8b 03                	mov    eax,DWORD PTR [ebx]
10105cab:	8b cb                	mov    ecx,ebx
10105cad:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
10105cb3:	ff d0                	call   eax
10105cb5:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
10105cb8:	83 ec 14             	sub    esp,0x14
10105cbb:	8b cc                	mov    ecx,esp
10105cbd:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10105cc0:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10105cc5:	8b 82 78 01 00 00    	mov    eax,DWORD PTR [edx+0x178]
10105ccb:	89 01                	mov    DWORD PTR [ecx],eax
10105ccd:	8b 82 7c 01 00 00    	mov    eax,DWORD PTR [edx+0x17c]
10105cd3:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10105cd6:	8b 82 80 01 00 00    	mov    eax,DWORD PTR [edx+0x180]
10105cdc:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10105cdf:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
10105ce2:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
10105ce8:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
10105cef:	00 
10105cf0:	83 ec 0c             	sub    esp,0xc
10105cf3:	8b cc                	mov    ecx,esp
10105cf5:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10105cf8:	89 01                	mov    DWORD PTR [ecx],eax
10105cfa:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
10105cfd:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10105d00:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
10105d03:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10105d06:	8b cb                	mov    ecx,ebx
10105d08:	8b 03                	mov    eax,DWORD PTR [ebx]
10105d0a:	ff 90 c8 01 00 00    	call   DWORD PTR [eax+0x1c8]
10105d10:	85 c0                	test   eax,eax
10105d12:	74 1e                	je     0x10105d32
10105d14:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105d19:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10105d1d:	f3 0f 58 05 80 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1380
10105d24:	10 
10105d25:	f3 0f 11 83 10 02 00 	movss  DWORD PTR [ebx+0x210],xmm0
10105d2c:	00 
10105d2d:	e9 dd fc ff ff       	jmp    0x10105a0f
10105d32:	81 8b 80 01 00 00 00 	or     DWORD PTR [ebx+0x180],0x40000000
10105d39:	00 00 40 
10105d3c:	5f                   	pop    edi
10105d3d:	5e                   	pop    esi
10105d3e:	5b                   	pop    ebx
10105d3f:	8b e5                	mov    esp,ebp
10105d41:	5d                   	pop    ebp
10105d42:	c2 04 00             	ret    0x4
10105d45:	6a 00                	push   0x0
10105d47:	8d 8b e0 03 00 00    	lea    ecx,[ebx+0x3e0]
10105d4d:	e8 ee 19 f1 ff       	call   0x10017740
10105d52:	8b cb                	mov    ecx,ebx
10105d54:	56                   	push   esi
10105d55:	e8 06 5f f0 ff       	call   0x1000bc60
10105d5a:	5f                   	pop    edi
10105d5b:	5e                   	pop    esi
10105d5c:	5b                   	pop    ebx
10105d5d:	8b e5                	mov    esp,ebp
10105d5f:	5d                   	pop    ebp
10105d60:	c2 04 00             	ret    0x4
