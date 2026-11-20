
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105dc0 <.text+0x104dc0>:
10105dc0:	55                   	push   ebp
10105dc1:	8b ec                	mov    ebp,esp
10105dc3:	53                   	push   ebx
10105dc4:	57                   	push   edi
10105dc5:	8b f9                	mov    edi,ecx
10105dc7:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
10105dcd:	e8 ae 19 f1 ff       	call   0x10017780
10105dd2:	85 c0                	test   eax,eax
10105dd4:	0f 84 c7 00 00 00    	je     0x10105ea1
10105dda:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
10105de0:	e8 bb 19 f1 ff       	call   0x100177a0
10105de5:	8b c8                	mov    ecx,eax
10105de7:	8b 10                	mov    edx,DWORD PTR [eax]
10105de9:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
10105def:	85 c0                	test   eax,eax
10105df1:	0f 84 aa 00 00 00    	je     0x10105ea1
10105df7:	f6 87 ec 02 00 00 01 	test   BYTE PTR [edi+0x2ec],0x1
10105dfe:	75 5e                	jne    0x10105e5e
10105e00:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
10105e04:	74 58                	je     0x10105e5e
10105e06:	56                   	push   esi
10105e07:	8b 37                	mov    esi,DWORD PTR [edi]
10105e09:	83 ec 10             	sub    esp,0x10
10105e0c:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10105e13:	40 
10105e14:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10105e1b:	3f 
10105e1c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10105e23:	40 
10105e24:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10105e2b:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10105e31:	83 c4 04             	add    esp,0x4
10105e34:	8b cf                	mov    ecx,edi
10105e36:	d9 1c 24             	fstp   DWORD PTR [esp]
10105e39:	ff b7 88 03 00 00    	push   DWORD PTR [edi+0x388]
10105e3f:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10105e45:	8b 87 8c 01 00 00    	mov    eax,DWORD PTR [edi+0x18c]
10105e4b:	89 87 e0 03 00 00    	mov    DWORD PTR [edi+0x3e0],eax
10105e51:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
10105e57:	89 87 e4 03 00 00    	mov    DWORD PTR [edi+0x3e4],eax
10105e5d:	5e                   	pop    esi
10105e5e:	83 bf b8 02 00 00 01 	cmp    DWORD PTR [edi+0x2b8],0x1
10105e65:	75 07                	jne    0x10105e6e
10105e67:	8b cf                	mov    ecx,edi
10105e69:	e8 02 bc fb ff       	call   0x100c1a70
10105e6e:	6a 00                	push   0x0
10105e70:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
10105e76:	e8 c5 18 f1 ff       	call   0x10017740
10105e7b:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10105e7f:	74 07                	je     0x10105e88
10105e81:	8b cf                	mov    ecx,edi
10105e83:	e8 48 4c f0 ff       	call   0x1000aad0
10105e88:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
10105e8e:	e8 ed 18 f1 ff       	call   0x10017780
10105e93:	85 c0                	test   eax,eax
10105e95:	74 0a                	je     0x10105ea1
10105e97:	c7 87 28 02 00 00 02 	mov    DWORD PTR [edi+0x228],0x2
10105e9e:	00 00 00 
10105ea1:	5f                   	pop    edi
10105ea2:	5b                   	pop    ebx
10105ea3:	5d                   	pop    ebp
10105ea4:	c2 08 00             	ret    0x8
