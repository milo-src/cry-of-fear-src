
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004ded0 <.text+0x4ced0>:
1004ded0:	55                   	push   ebp
1004ded1:	8b ec                	mov    ebp,esp
1004ded3:	56                   	push   esi
1004ded4:	57                   	push   edi
1004ded5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1004ded8:	8b f1                	mov    esi,ecx
1004deda:	85 ff                	test   edi,edi
1004dedc:	0f 84 3b 01 00 00    	je     0x1004e01d
1004dee2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004dee7:	f3 0f 10 86 00 01 00 	movss  xmm0,DWORD PTR [esi+0x100]
1004deee:	00 
1004deef:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
1004def2:	0f 87 25 01 00 00    	ja     0x1004e01d
1004def8:	8b 07                	mov    eax,DWORD PTR [edi]
1004defa:	8b cf                	mov    ecx,edi
1004defc:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1004df02:	85 c0                	test   eax,eax
1004df04:	0f 84 fa 00 00 00    	je     0x1004e004
1004df0a:	ff 77 04             	push   DWORD PTR [edi+0x4]
1004df0d:	e8 ce 46 fc ff       	call   0x100125e0
1004df12:	8b f8                	mov    edi,eax
1004df14:	83 c4 04             	add    esp,0x4
1004df17:	85 ff                	test   edi,edi
1004df19:	0f 84 fe 00 00 00    	je     0x1004e01d
1004df1f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004df22:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
1004df28:	85 c9                	test   ecx,ecx
1004df2a:	74 25                	je     0x1004df51
1004df2c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004df31:	51                   	push   ecx
1004df32:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1004df39:	6a 03                	push   0x3
1004df3b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004df41:	56                   	push   esi
1004df42:	03 c1                	add    eax,ecx
1004df44:	56                   	push   esi
1004df45:	50                   	push   eax
1004df46:	e8 a5 40 0b 00       	call   0x10101ff0
1004df4b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004df4e:	83 c4 14             	add    esp,0x14
1004df51:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
1004df58:	74 4f                	je     0x1004dfa9
1004df5a:	8b 80 48 02 00 00    	mov    eax,DWORD PTR [eax+0x248]
1004df60:	85 c0                	test   eax,eax
1004df62:	74 45                	je     0x1004dfa9
1004df64:	83 e8 01             	sub    eax,0x1
1004df67:	74 1f                	je     0x1004df88
1004df69:	83 e8 01             	sub    eax,0x1
1004df6c:	74 0f                	je     0x1004df7d
1004df6e:	83 e8 01             	sub    eax,0x1
1004df71:	75 36                	jne    0x1004dfa9
1004df73:	50                   	push   eax
1004df74:	6a 05                	push   0x5
1004df76:	68 c8 18 1b 10       	push   0x101b18c8
1004df7b:	eb 14                	jmp    0x1004df91
1004df7d:	6a 00                	push   0x0
1004df7f:	6a 05                	push   0x5
1004df81:	68 a4 18 1b 10       	push   0x101b18a4
1004df86:	eb 09                	jmp    0x1004df91
1004df88:	6a 00                	push   0x0
1004df8a:	6a 05                	push   0x5
1004df8c:	68 88 18 1b 10       	push   0x101b1888
1004df91:	57                   	push   edi
1004df92:	e8 79 b8 0c 00       	call   0x10119810
1004df97:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004df9a:	83 c4 10             	add    esp,0x10
1004df9d:	ff 88 48 02 00 00    	dec    DWORD PTR [eax+0x248]
1004dfa3:	5f                   	pop    edi
1004dfa4:	5e                   	pop    esi
1004dfa5:	5d                   	pop    ebp
1004dfa6:	c2 10 00             	ret    0x10
1004dfa9:	56                   	push   esi
1004dfaa:	8b cf                	mov    ecx,edi
1004dfac:	e8 cf 4f 09 00       	call   0x100e2f80
1004dfb1:	85 c0                	test   eax,eax
1004dfb3:	74 4f                	je     0x1004e004
1004dfb5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004dfb8:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1004dfbf:	74 2d                	je     0x1004dfee
1004dfc1:	68 18 88 1a 10       	push   0x101a8818
1004dfc6:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1004dfcc:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1004dfcf:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1004dfd4:	83 c4 04             	add    esp,0x4
1004dfd7:	0f 2e 05 b8 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1eb8
1004dfde:	9f                   	lahf
1004dfdf:	f6 c4 44             	test   ah,0x44
1004dfe2:	7a 0a                	jp     0x1004dfee
1004dfe4:	c7 87 f4 1e 00 00 05 	mov    DWORD PTR [edi+0x1ef4],0x5
1004dfeb:	00 00 00 
1004dfee:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004dff1:	56                   	push   esi
1004dff2:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1004dff9:	00 00 00 
1004dffc:	e8 ff b8 0c 00       	call   0x10119900
1004e001:	83 c4 04             	add    esp,0x4
1004e004:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004e009:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004e00d:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1004e014:	10 
1004e015:	f3 0f 11 86 00 01 00 	movss  DWORD PTR [esi+0x100],xmm0
1004e01c:	00 
1004e01d:	5f                   	pop    edi
1004e01e:	5e                   	pop    esi
1004e01f:	5d                   	pop    ebp
1004e020:	c2 10 00             	ret    0x10
1004e023:	cc                   	int3
1004e024:	cc                   	int3
1004e025:	cc                   	int3
1004e026:	cc                   	int3
1004e027:	cc                   	int3
1004e028:	cc                   	int3
1004e029:	cc                   	int3
1004e02a:	cc                   	int3
1004e02b:	cc                   	int3
1004e02c:	cc                   	int3
1004e02d:	cc                   	int3
1004e02e:	cc                   	int3
1004e02f:	cc                   	int3
