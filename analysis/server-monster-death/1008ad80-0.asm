
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ad80 <.text+0x89d80>:
1008ad80:	55                   	push   ebp
1008ad81:	8b ec                	mov    ebp,esp
1008ad83:	83 ec 18             	sub    esp,0x18
1008ad86:	53                   	push   ebx
1008ad87:	56                   	push   esi
1008ad88:	57                   	push   edi
1008ad89:	6a 00                	push   0x0
1008ad8b:	e8 50 fb f9 ff       	call   0x1002a8e0
1008ad90:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1008ad93:	83 c4 04             	add    esp,0x4
1008ad96:	8b f8                	mov    edi,eax
1008ad98:	8b cf                	mov    ecx,edi
1008ad9a:	56                   	push   esi
1008ad9b:	e8 e0 fe ff ff       	call   0x1008ac80
1008ada0:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1008ada3:	8b c6                	mov    eax,esi
1008ada5:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1008ada8:	89 8a 14 01 00 00    	mov    DWORD PTR [edx+0x114],ecx
1008adae:	b9 f4 90 1a 10       	mov    ecx,0x101a90f4
1008adb3:	8a 10                	mov    dl,BYTE PTR [eax]
1008adb5:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008adb7:	75 1a                	jne    0x1008add3
1008adb9:	84 d2                	test   dl,dl
1008adbb:	74 12                	je     0x1008adcf
1008adbd:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008adc0:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008adc3:	75 0e                	jne    0x1008add3
1008adc5:	83 c0 02             	add    eax,0x2
1008adc8:	83 c1 02             	add    ecx,0x2
1008adcb:	84 d2                	test   dl,dl
1008adcd:	75 e4                	jne    0x1008adb3
1008adcf:	33 c0                	xor    eax,eax
1008add1:	eb 05                	jmp    0x1008add8
1008add3:	1b c0                	sbb    eax,eax
1008add5:	83 c8 01             	or     eax,0x1
1008add8:	85 c0                	test   eax,eax
1008adda:	75 51                	jne    0x1008ae2d
1008addc:	50                   	push   eax
1008addd:	50                   	push   eax
1008adde:	ff 35 90 64 22 10    	push   DWORD PTR ds:0x10226490
1008ade4:	6a 02                	push   0x2
1008ade6:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1008adec:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008adef:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008adf5:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1008adfb:	50                   	push   eax
1008adfc:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1008ae02:	68 ec b7 1b 10       	push   0x101bb7ec
1008ae07:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1008ae0d:	6a 00                	push   0x0
1008ae0f:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1008ae15:	56                   	push   esi
1008ae16:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1008ae1c:	6a 00                	push   0x0
1008ae1e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1008ae24:	83 c4 28             	add    esp,0x28
1008ae27:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1008ae2d:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008ae30:	85 db                	test   ebx,ebx
1008ae32:	0f 84 62 02 00 00    	je     0x1008b09a
1008ae38:	f3 0f 10 93 78 01 00 	movss  xmm2,DWORD PTR [ebx+0x178]
1008ae3f:	00 
1008ae40:	f3 0f 10 8b 7c 01 00 	movss  xmm1,DWORD PTR [ebx+0x17c]
1008ae47:	00 
1008ae48:	f3 0f 10 83 80 01 00 	movss  xmm0,DWORD PTR [ebx+0x180]
1008ae4f:	00 
1008ae50:	f3 0f 58 53 08       	addss  xmm2,DWORD PTR [ebx+0x8]
1008ae55:	f3 0f 58 4b 0c       	addss  xmm1,DWORD PTR [ebx+0xc]
1008ae5a:	f3 0f 58 43 10       	addss  xmm0,DWORD PTR [ebx+0x10]
1008ae5f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008ae62:	0f 14 d1             	unpcklps xmm2,xmm1
1008ae65:	66 0f d6 51 08       	movq   QWORD PTR [ecx+0x8],xmm2
1008ae6a:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008ae6f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008ae72:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
1008ae75:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008ae78:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008ae7e:	ff 15 8c 2f 22 10    	call   DWORD PTR ds:0x10222f8c
1008ae84:	6a 64                	push   0x64
1008ae86:	6a 00                	push   0x0
1008ae88:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
1008ae8b:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1008ae91:	83 c4 0c             	add    esp,0xc
1008ae94:	83 f8 05             	cmp    eax,0x5
1008ae97:	0f 8f b4 00 00 00    	jg     0x1008af51
1008ae9d:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1008aea0:	85 c0                	test   eax,eax
1008aea2:	0f 84 a9 00 00 00    	je     0x1008af51
1008aea8:	f3 0f 10 80 f8 01 00 	movss  xmm0,DWORD PTR [eax+0x1f8]
1008aeaf:	00 
1008aeb0:	8d 4d f4             	lea    ecx,[ebp-0xc]
1008aeb3:	f3 0f 58 80 88 00 00 	addss  xmm0,DWORD PTR [eax+0x88]
1008aeba:	00 
1008aebb:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1008aebe:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
1008aec3:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008aec8:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
1008aecf:	00 
1008aed0:	f3 0f 58 80 8c 00 00 	addss  xmm0,DWORD PTR [eax+0x8c]
1008aed7:	00 
1008aed8:	f3 0f 5c 46 0c       	subss  xmm0,DWORD PTR [esi+0xc]
1008aedd:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008aee2:	f3 0f 10 80 00 02 00 	movss  xmm0,DWORD PTR [eax+0x200]
1008aee9:	00 
1008aeea:	f3 0f 58 80 90 00 00 	addss  xmm0,DWORD PTR [eax+0x90]
1008aef1:	00 
1008aef2:	8d 45 e8             	lea    eax,[ebp-0x18]
1008aef5:	50                   	push   eax
1008aef6:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
1008aefb:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008af00:	e8 6b cf f8 ff       	call   0x10017e70
1008af05:	f3 0f 10 1d 30 97 1a 	movss  xmm3,DWORD PTR ds:0x101a9730
1008af0c:	10 
1008af0d:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
1008af11:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
1008af16:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1008af1b:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008af1f:	f3 0f 59 d3          	mulss  xmm2,xmm3
1008af23:	f3 0f 59 cb          	mulss  xmm1,xmm3
1008af27:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008af2c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008af2f:	0f 14 d1             	unpcklps xmm2,xmm1
1008af32:	66 0f d6 56 20       	movq   QWORD PTR [esi+0x20],xmm2
1008af37:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1008af3a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008af3d:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
1008af42:	f3 0f 58 05 1c 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f1c
1008af49:	10 
1008af4a:	f3 0f 11 40 28       	movss  DWORD PTR [eax+0x28],xmm0
1008af4f:	eb 61                	jmp    0x1008afb2
1008af51:	83 ec 08             	sub    esp,0x8
1008af54:	c7 44 24 04 00 00 c8 	mov    DWORD PTR [esp+0x4],0x42c80000
1008af5b:	42 
1008af5c:	c7 04 24 00 00 c8 c2 	mov    DWORD PTR [esp],0xc2c80000
1008af63:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008af69:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
1008af6c:	c7 44 24 04 00 00 c8 	mov    DWORD PTR [esp+0x4],0x42c80000
1008af73:	42 
1008af74:	c7 04 24 00 00 c8 c2 	mov    DWORD PTR [esp],0xc2c80000
1008af7b:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008af81:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
1008af84:	c7 44 24 04 00 00 96 	mov    DWORD PTR [esp+0x4],0x43960000
1008af8b:	43 
1008af8c:	c7 04 24 00 00 48 43 	mov    DWORD PTR [esp],0x43480000
1008af93:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008af99:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008af9c:	83 c4 08             	add    esp,0x8
1008af9f:	f3 0f 7e 45 f4       	movq   xmm0,QWORD PTR [ebp-0xc]
1008afa4:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1008afa7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008afaa:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
1008afaf:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1008afb2:	83 ec 08             	sub    esp,0x8
1008afb5:	c7 44 24 04 00 00 48 	mov    DWORD PTR [esp+0x4],0x43480000
1008afbc:	43 
1008afbd:	c7 04 24 00 00 c8 42 	mov    DWORD PTR [esp],0x42c80000
1008afc4:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008afca:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008afcd:	c7 44 24 04 00 00 96 	mov    DWORD PTR [esp+0x4],0x43960000
1008afd4:	43 
1008afd5:	c7 04 24 00 00 c8 42 	mov    DWORD PTR [esp],0x42c80000
1008afdc:	d9 58 5c             	fstp   DWORD PTR [eax+0x5c]
1008afdf:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008afe5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008afe8:	83 c4 08             	add    esp,0x8
1008afeb:	d9 58 60             	fstp   DWORD PTR [eax+0x60]
1008afee:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
1008aff4:	85 c0                	test   eax,eax
1008aff6:	75 12                	jne    0x1008b00a
1008aff8:	50                   	push   eax
1008aff9:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1008afff:	83 c4 04             	add    esp,0x4
1008b002:	85 c0                	test   eax,eax
1008b004:	75 04                	jne    0x1008b00a
1008b006:	33 c9                	xor    ecx,ecx
1008b008:	eb 03                	jmp    0x1008b00d
1008b00a:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1008b00d:	8b 01                	mov    eax,DWORD PTR [ecx]
1008b00f:	ff 50 70             	call   DWORD PTR [eax+0x70]
1008b012:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008b015:	89 87 dc 00 00 00    	mov    DWORD PTR [edi+0xdc],eax
1008b01b:	f3 0f 10 83 64 01 00 	movss  xmm0,DWORD PTR [ebx+0x164]
1008b022:	00 
1008b023:	0f 2f 05 2c c8 1a 10 	comiss xmm0,DWORD PTR ds:0x101ac82c
1008b02a:	76 0a                	jbe    0x1008b036
1008b02c:	f3 0f 10 0d 3c ef 1b 	movss  xmm1,DWORD PTR ds:0x101bef3c
1008b033:	10 
1008b034:	eb 36                	jmp    0x1008b06c
1008b036:	0f 2f 05 6c ef 1b 10 	comiss xmm0,DWORD PTR ds:0x101bef6c
1008b03d:	76 25                	jbe    0x1008b064
1008b03f:	f3 0f 10 51 20       	movss  xmm2,DWORD PTR [ecx+0x20]
1008b044:	f3 0f 10 49 24       	movss  xmm1,DWORD PTR [ecx+0x24]
1008b049:	f3 0f 58 d2          	addss  xmm2,xmm2
1008b04d:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
1008b052:	f3 0f 58 c9          	addss  xmm1,xmm1
1008b056:	f3 0f 58 c0          	addss  xmm0,xmm0
1008b05a:	0f 14 d1             	unpcklps xmm2,xmm1
1008b05d:	66 0f d6 51 20       	movq   QWORD PTR [ecx+0x20],xmm2
1008b062:	eb 2b                	jmp    0x1008b08f
1008b064:	f3 0f 10 0d b8 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1eb8
1008b06b:	10 
1008b06c:	f3 0f 10 59 20       	movss  xmm3,DWORD PTR [ecx+0x20]
1008b071:	f3 0f 10 51 24       	movss  xmm2,DWORD PTR [ecx+0x24]
1008b076:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
1008b07b:	f3 0f 59 d1          	mulss  xmm2,xmm1
1008b07f:	f3 0f 59 d9          	mulss  xmm3,xmm1
1008b083:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008b087:	0f 14 da             	unpcklps xmm3,xmm2
1008b08a:	66 0f d6 59 20       	movq   QWORD PTR [ecx+0x20],xmm3
1008b08f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008b094:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008b097:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1008b09a:	8b cf                	mov    ecx,edi
1008b09c:	e8 9f f3 ff ff       	call   0x1008a440
1008b0a1:	5f                   	pop    edi
1008b0a2:	5e                   	pop    esi
1008b0a3:	5b                   	pop    ebx
1008b0a4:	8b e5                	mov    esp,ebp
1008b0a6:	5d                   	pop    ebp
1008b0a7:	c3                   	ret
