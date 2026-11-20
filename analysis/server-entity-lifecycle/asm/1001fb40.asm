
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fb40 <.text+0x1eb40>:
1001fb40:	55                   	push   ebp
1001fb41:	8b ec                	mov    ebp,esp
1001fb43:	83 ec 0c             	sub    esp,0xc
1001fb46:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1001fb4a:	57                   	push   edi
1001fb4b:	8b f9                	mov    edi,ecx
1001fb4d:	0f 84 c4 01 00 00    	je     0x1001fd17
1001fb53:	56                   	push   esi
1001fb54:	68 30 21 1a 10       	push   0x101a2130
1001fb59:	6a 00                	push   0x0
1001fb5b:	e8 00 89 0f 00       	call   0x10118460
1001fb60:	8b f0                	mov    esi,eax
1001fb62:	83 c4 08             	add    esp,0x8
1001fb65:	85 f6                	test   esi,esi
1001fb67:	0f 84 a9 01 00 00    	je     0x1001fd16
1001fb6d:	8b 16                	mov    edx,DWORD PTR [esi]
1001fb6f:	8b ce                	mov    ecx,esi
1001fb71:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1001fb77:	85 c0                	test   eax,eax
1001fb79:	0f 84 97 01 00 00    	je     0x1001fd16
1001fb7f:	8b 06                	mov    eax,DWORD PTR [esi]
1001fb81:	8b ce                	mov    ecx,esi
1001fb83:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1001fb89:	85 c0                	test   eax,eax
1001fb8b:	0f 84 85 01 00 00    	je     0x1001fd16
1001fb91:	ff 76 04             	push   DWORD PTR [esi+0x4]
1001fb94:	e8 47 2a ff ff       	call   0x100125e0
1001fb99:	83 c4 04             	add    esp,0x4
1001fb9c:	89 87 00 02 00 00    	mov    DWORD PTR [edi+0x200],eax
1001fba2:	85 c0                	test   eax,eax
1001fba4:	0f 84 6c 01 00 00    	je     0x1001fd16
1001fbaa:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1001fbad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fbb2:	51                   	push   ecx
1001fbb3:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1001fbba:	8b 00                	mov    eax,DWORD PTR [eax]
1001fbbc:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
1001fbc2:	8b cf                	mov    ecx,edi
1001fbc4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001fbc7:	c7 80 4c 02 00 00 00 	mov    DWORD PTR [eax+0x24c],0x0
1001fbce:	00 00 00 
1001fbd1:	8b 07                	mov    eax,DWORD PTR [edi]
1001fbd3:	ff 50 08             	call   DWORD PTR [eax+0x8]
1001fbd6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001fbd9:	c7 47 78 f0 f4 01 10 	mov    DWORD PTR [edi+0x78],0x1001f4f0
1001fbe0:	57                   	push   edi
1001fbe1:	c7 80 14 01 00 00 01 	mov    DWORD PTR [eax+0x114],0x1
1001fbe8:	00 00 00 
1001fbeb:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fbf1:	81 c1 88 03 00 00    	add    ecx,0x388
1001fbf7:	e8 44 7b ff ff       	call   0x10017740
1001fbfc:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fc02:	8b 81 88 03 00 00    	mov    eax,DWORD PTR [ecx+0x388]
1001fc08:	89 81 c0 05 00 00    	mov    DWORD PTR [ecx+0x5c0],eax
1001fc0e:	8b 81 8c 03 00 00    	mov    eax,DWORD PTR [ecx+0x38c]
1001fc14:	89 81 c4 05 00 00    	mov    DWORD PTR [ecx+0x5c4],eax
1001fc1a:	8b 87 00 02 00 00    	mov    eax,DWORD PTR [edi+0x200]
1001fc20:	c7 80 a0 1e 00 00 01 	mov    DWORD PTR [eax+0x1ea0],0x1
1001fc27:	00 00 00 
1001fc2a:	8b 87 00 02 00 00    	mov    eax,DWORD PTR [edi+0x200]
1001fc30:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1001fc33:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1001fc39:	6a 00                	push   0x0
1001fc3b:	ff 35 4c 66 22 10    	push   DWORD PTR ds:0x1022664c
1001fc41:	6a 01                	push   0x1
1001fc43:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1001fc49:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fc4f:	83 c4 10             	add    esp,0x10
1001fc52:	81 c1 88 03 00 00    	add    ecx,0x388
1001fc58:	e8 43 7b ff ff       	call   0x100177a0
1001fc5d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1001fc60:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1001fc66:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1001fc6c:	50                   	push   eax
1001fc6d:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1001fc73:	6a 00                	push   0x0
1001fc75:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001fc7b:	6a 00                	push   0x0
1001fc7d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001fc83:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fc89:	8d 55 f4             	lea    edx,[ebp-0xc]
1001fc8c:	83 c4 10             	add    esp,0x10
1001fc8f:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fc91:	52                   	push   edx
1001fc92:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
1001fc98:	f3 0f 2c 00          	cvttss2si eax,DWORD PTR [eax]
1001fc9c:	50                   	push   eax
1001fc9d:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
1001fca3:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fca9:	8d 55 f4             	lea    edx,[ebp-0xc]
1001fcac:	83 c4 04             	add    esp,0x4
1001fcaf:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fcb1:	52                   	push   edx
1001fcb2:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
1001fcb8:	f3 0f 2c 40 04       	cvttss2si eax,DWORD PTR [eax+0x4]
1001fcbd:	50                   	push   eax
1001fcbe:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
1001fcc4:	8b 8f 00 02 00 00    	mov    ecx,DWORD PTR [edi+0x200]
1001fcca:	8d 55 f4             	lea    edx,[ebp-0xc]
1001fccd:	83 c4 04             	add    esp,0x4
1001fcd0:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fcd2:	52                   	push   edx
1001fcd3:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
1001fcd9:	f3 0f 2c 40 08       	cvttss2si eax,DWORD PTR [eax+0x8]
1001fcde:	50                   	push   eax
1001fcdf:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
1001fce5:	83 c4 04             	add    esp,0x4
1001fce8:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1001fcee:	68 7c 98 1a 10       	push   0x101a987c
1001fcf3:	8b cf                	mov    ecx,edi
1001fcf5:	e8 76 01 00 00       	call   0x1001fe70
1001fcfa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fcff:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001fd03:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1001fd0a:	10 
1001fd0b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001fd0e:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001fd15:	00 
1001fd16:	5e                   	pop    esi
1001fd17:	5f                   	pop    edi
1001fd18:	8b e5                	mov    esp,ebp
1001fd1a:	5d                   	pop    ebp
1001fd1b:	c2 10 00             	ret    0x10
