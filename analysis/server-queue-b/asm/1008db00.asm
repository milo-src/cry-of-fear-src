
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008db00 <.text+0x8cb00>:
1008db00:	55                   	push   ebp
1008db01:	8b ec                	mov    ebp,esp
1008db03:	53                   	push   ebx
1008db04:	56                   	push   esi
1008db05:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008db08:	8b d9                	mov    ebx,ecx
1008db0a:	57                   	push   edi
1008db0b:	ba 60 3c 1a 10       	mov    edx,0x101a3c60
1008db10:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008db13:	8b c7                	mov    eax,edi
1008db15:	8a 08                	mov    cl,BYTE PTR [eax]
1008db17:	3a 0a                	cmp    cl,BYTE PTR [edx]
1008db19:	75 1a                	jne    0x1008db35
1008db1b:	84 c9                	test   cl,cl
1008db1d:	74 12                	je     0x1008db31
1008db1f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1008db22:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1008db25:	75 0e                	jne    0x1008db35
1008db27:	83 c0 02             	add    eax,0x2
1008db2a:	83 c2 02             	add    edx,0x2
1008db2d:	84 c9                	test   cl,cl
1008db2f:	75 e4                	jne    0x1008db15
1008db31:	33 c0                	xor    eax,eax
1008db33:	eb 05                	jmp    0x1008db3a
1008db35:	1b c0                	sbb    eax,eax
1008db37:	83 c8 01             	or     eax,0x1
1008db3a:	85 c0                	test   eax,eax
1008db3c:	75 27                	jne    0x1008db65
1008db3e:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008db41:	e8 a6 1a 0e 00       	call   0x1016f5ec
1008db46:	83 c4 04             	add    esp,0x4
1008db49:	e8 02 04 0b 00       	call   0x1013df50
1008db4e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1008db51:	5f                   	pop    edi
1008db52:	89 81 10 01 00 00    	mov    DWORD PTR [ecx+0x110],eax
1008db58:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008db5f:	5e                   	pop    esi
1008db60:	5b                   	pop    ebx
1008db61:	5d                   	pop    ebp
1008db62:	c2 04 00             	ret    0x4
1008db65:	b9 bc f3 1b 10       	mov    ecx,0x101bf3bc
1008db6a:	8b c7                	mov    eax,edi
1008db6c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1008db70:	8a 10                	mov    dl,BYTE PTR [eax]
1008db72:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008db74:	75 1a                	jne    0x1008db90
1008db76:	84 d2                	test   dl,dl
1008db78:	74 12                	je     0x1008db8c
1008db7a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008db7d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008db80:	75 0e                	jne    0x1008db90
1008db82:	83 c0 02             	add    eax,0x2
1008db85:	83 c1 02             	add    ecx,0x2
1008db88:	84 d2                	test   dl,dl
1008db8a:	75 e4                	jne    0x1008db70
1008db8c:	33 c0                	xor    eax,eax
1008db8e:	eb 05                	jmp    0x1008db95
1008db90:	1b c0                	sbb    eax,eax
1008db92:	83 c8 01             	or     eax,0x1
1008db95:	85 c0                	test   eax,eax
1008db97:	75 24                	jne    0x1008dbbd
1008db99:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008db9c:	e8 4b 1a 0e 00       	call   0x1016f5ec
1008dba1:	83 c4 04             	add    esp,0x4
1008dba4:	e8 d7 04 0b 00       	call   0x1013e080
1008dba9:	88 83 81 01 00 00    	mov    BYTE PTR [ebx+0x181],al
1008dbaf:	5f                   	pop    edi
1008dbb0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dbb7:	5e                   	pop    esi
1008dbb8:	5b                   	pop    ebx
1008dbb9:	5d                   	pop    ebp
1008dbba:	c2 04 00             	ret    0x4
1008dbbd:	b9 c4 f3 1b 10       	mov    ecx,0x101bf3c4
1008dbc2:	8b c7                	mov    eax,edi
1008dbc4:	8a 10                	mov    dl,BYTE PTR [eax]
1008dbc6:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008dbc8:	75 1a                	jne    0x1008dbe4
1008dbca:	84 d2                	test   dl,dl
1008dbcc:	74 12                	je     0x1008dbe0
1008dbce:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008dbd1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008dbd4:	75 0e                	jne    0x1008dbe4
1008dbd6:	83 c0 02             	add    eax,0x2
1008dbd9:	83 c1 02             	add    ecx,0x2
1008dbdc:	84 d2                	test   dl,dl
1008dbde:	75 e4                	jne    0x1008dbc4
1008dbe0:	33 c0                	xor    eax,eax
1008dbe2:	eb 05                	jmp    0x1008dbe9
1008dbe4:	1b c0                	sbb    eax,eax
1008dbe6:	83 c8 01             	or     eax,0x1
1008dbe9:	85 c0                	test   eax,eax
1008dbeb:	75 24                	jne    0x1008dc11
1008dbed:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dbf0:	e8 f7 19 0e 00       	call   0x1016f5ec
1008dbf5:	83 c4 04             	add    esp,0x4
1008dbf8:	e8 83 04 0b 00       	call   0x1013e080
1008dbfd:	88 83 82 01 00 00    	mov    BYTE PTR [ebx+0x182],al
1008dc03:	5f                   	pop    edi
1008dc04:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dc0b:	5e                   	pop    esi
1008dc0c:	5b                   	pop    ebx
1008dc0d:	5d                   	pop    ebp
1008dc0e:	c2 04 00             	ret    0x4
1008dc11:	68 cc f3 1b 10       	push   0x101bf3cc
1008dc16:	57                   	push   edi
1008dc17:	e8 84 cf f7 ff       	call   0x1000aba0
1008dc1c:	83 c4 08             	add    esp,0x8
1008dc1f:	85 c0                	test   eax,eax
1008dc21:	74 24                	je     0x1008dc47
1008dc23:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dc26:	e8 c1 19 0e 00       	call   0x1016f5ec
1008dc2b:	83 c4 04             	add    esp,0x4
1008dc2e:	e8 4d 04 0b 00       	call   0x1013e080
1008dc33:	88 83 80 01 00 00    	mov    BYTE PTR [ebx+0x180],al
1008dc39:	5f                   	pop    edi
1008dc3a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dc41:	5e                   	pop    esi
1008dc42:	5b                   	pop    ebx
1008dc43:	5d                   	pop    ebp
1008dc44:	c2 04 00             	ret    0x4
1008dc47:	68 00 57 1a 10       	push   0x101a5700
1008dc4c:	57                   	push   edi
1008dc4d:	e8 4e cf f7 ff       	call   0x1000aba0
1008dc52:	83 c4 08             	add    esp,0x8
1008dc55:	85 c0                	test   eax,eax
1008dc57:	74 24                	je     0x1008dc7d
1008dc59:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dc5c:	e8 8b 19 0e 00       	call   0x1016f5ec
1008dc61:	83 c4 04             	add    esp,0x4
1008dc64:	e8 17 04 0b 00       	call   0x1013e080
1008dc69:	88 83 a8 01 00 00    	mov    BYTE PTR [ebx+0x1a8],al
1008dc6f:	5f                   	pop    edi
1008dc70:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dc77:	5e                   	pop    esi
1008dc78:	5b                   	pop    ebx
1008dc79:	5d                   	pop    ebp
1008dc7a:	c2 04 00             	ret    0x4
1008dc7d:	68 10 57 1a 10       	push   0x101a5710
1008dc82:	57                   	push   edi
1008dc83:	e8 18 cf f7 ff       	call   0x1000aba0
1008dc88:	83 c4 08             	add    esp,0x8
1008dc8b:	85 c0                	test   eax,eax
1008dc8d:	74 24                	je     0x1008dcb3
1008dc8f:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dc92:	e8 55 19 0e 00       	call   0x1016f5ec
1008dc97:	83 c4 04             	add    esp,0x4
1008dc9a:	e8 e1 03 0b 00       	call   0x1013e080
1008dc9f:	88 83 a9 01 00 00    	mov    BYTE PTR [ebx+0x1a9],al
1008dca5:	5f                   	pop    edi
1008dca6:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dcad:	5e                   	pop    esi
1008dcae:	5b                   	pop    ebx
1008dcaf:	5d                   	pop    ebp
1008dcb0:	c2 04 00             	ret    0x4
1008dcb3:	68 20 57 1a 10       	push   0x101a5720
1008dcb8:	57                   	push   edi
1008dcb9:	e8 e2 ce f7 ff       	call   0x1000aba0
1008dcbe:	83 c4 08             	add    esp,0x8
1008dcc1:	85 c0                	test   eax,eax
1008dcc3:	74 24                	je     0x1008dce9
1008dcc5:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dcc8:	e8 1f 19 0e 00       	call   0x1016f5ec
1008dccd:	83 c4 04             	add    esp,0x4
1008dcd0:	e8 ab 03 0b 00       	call   0x1013e080
1008dcd5:	88 83 aa 01 00 00    	mov    BYTE PTR [ebx+0x1aa],al
1008dcdb:	5f                   	pop    edi
1008dcdc:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dce3:	5e                   	pop    esi
1008dce4:	5b                   	pop    ebx
1008dce5:	5d                   	pop    ebp
1008dce6:	c2 04 00             	ret    0x4
1008dce9:	68 30 57 1a 10       	push   0x101a5730
1008dcee:	57                   	push   edi
1008dcef:	e8 ac ce f7 ff       	call   0x1000aba0
1008dcf4:	83 c4 08             	add    esp,0x8
1008dcf7:	85 c0                	test   eax,eax
1008dcf9:	74 24                	je     0x1008dd1f
1008dcfb:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dcfe:	e8 e9 18 0e 00       	call   0x1016f5ec
1008dd03:	83 c4 04             	add    esp,0x4
1008dd06:	e8 75 03 0b 00       	call   0x1013e080
1008dd0b:	88 83 ab 01 00 00    	mov    BYTE PTR [ebx+0x1ab],al
1008dd11:	5f                   	pop    edi
1008dd12:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dd19:	5e                   	pop    esi
1008dd1a:	5b                   	pop    ebx
1008dd1b:	5d                   	pop    ebp
1008dd1c:	c2 04 00             	ret    0x4
1008dd1f:	68 d8 f3 1b 10       	push   0x101bf3d8
1008dd24:	57                   	push   edi
1008dd25:	e8 76 ce f7 ff       	call   0x1000aba0
1008dd2a:	83 c4 08             	add    esp,0x8
1008dd2d:	85 c0                	test   eax,eax
1008dd2f:	74 1f                	je     0x1008dd50
1008dd31:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dd34:	e8 25 d8 0d 00       	call   0x1016b55e
1008dd39:	83 c4 04             	add    esp,0x4
1008dd3c:	89 83 b0 01 00 00    	mov    DWORD PTR [ebx+0x1b0],eax
1008dd42:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dd49:	5f                   	pop    edi
1008dd4a:	5e                   	pop    esi
1008dd4b:	5b                   	pop    ebx
1008dd4c:	5d                   	pop    ebp
1008dd4d:	c2 04 00             	ret    0x4
1008dd50:	68 e8 f3 1b 10       	push   0x101bf3e8
1008dd55:	57                   	push   edi
1008dd56:	e8 45 ce f7 ff       	call   0x1000aba0
1008dd5b:	83 c4 08             	add    esp,0x8
1008dd5e:	85 c0                	test   eax,eax
1008dd60:	74 1f                	je     0x1008dd81
1008dd62:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dd65:	e8 f4 d7 0d 00       	call   0x1016b55e
1008dd6a:	83 c4 04             	add    esp,0x4
1008dd6d:	89 83 ac 01 00 00    	mov    DWORD PTR [ebx+0x1ac],eax
1008dd73:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008dd7a:	5f                   	pop    edi
1008dd7b:	5e                   	pop    esi
1008dd7c:	5b                   	pop    ebx
1008dd7d:	5d                   	pop    ebp
1008dd7e:	c2 04 00             	ret    0x4
1008dd81:	68 f4 f3 1b 10       	push   0x101bf3f4
1008dd86:	57                   	push   edi
1008dd87:	e8 14 ce f7 ff       	call   0x1000aba0
1008dd8c:	83 c4 08             	add    esp,0x8
1008dd8f:	85 c0                	test   eax,eax
1008dd91:	74 1f                	je     0x1008ddb2
1008dd93:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008dd96:	e8 c3 d7 0d 00       	call   0x1016b55e
1008dd9b:	83 c4 04             	add    esp,0x4
1008dd9e:	89 83 b4 01 00 00    	mov    DWORD PTR [ebx+0x1b4],eax
1008dda4:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008ddab:	5f                   	pop    edi
1008ddac:	5e                   	pop    esi
1008ddad:	5b                   	pop    ebx
1008ddae:	5d                   	pop    ebp
1008ddaf:	c2 04 00             	ret    0x4
1008ddb2:	68 00 f4 1b 10       	push   0x101bf400
1008ddb7:	57                   	push   edi
1008ddb8:	e8 e3 cd f7 ff       	call   0x1000aba0
1008ddbd:	83 c4 08             	add    esp,0x8
1008ddc0:	85 c0                	test   eax,eax
1008ddc2:	74 32                	je     0x1008ddf6
1008ddc4:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008ddc7:	e8 20 18 0e 00       	call   0x1016f5ec
1008ddcc:	dc 0d 08 1e 1a 10    	fmul   QWORD PTR ds:0x101a1e08
1008ddd2:	83 c4 04             	add    esp,0x4
1008ddd5:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1008ddd8:	5f                   	pop    edi
1008ddd9:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1008dddc:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008dde1:	f3 0f 11 80 48 01 00 	movss  DWORD PTR [eax+0x148],xmm0
1008dde8:	00 
1008dde9:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008ddf0:	5e                   	pop    esi
1008ddf1:	5b                   	pop    ebx
1008ddf2:	5d                   	pop    ebp
1008ddf3:	c2 04 00             	ret    0x4
1008ddf6:	56                   	push   esi
1008ddf7:	8b cb                	mov    ecx,ebx
1008ddf9:	e8 82 46 07 00       	call   0x10102480
1008ddfe:	5f                   	pop    edi
1008ddff:	5e                   	pop    esi
1008de00:	5b                   	pop    ebx
1008de01:	5d                   	pop    ebp
1008de02:	c2 04 00             	ret    0x4
