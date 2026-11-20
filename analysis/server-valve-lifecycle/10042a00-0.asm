
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042a00 <.text+0x41a00>:
10042a00:	56                   	push   esi
10042a01:	8b f1                	mov    esi,ecx
10042a03:	57                   	push   edi
10042a04:	8b 06                	mov    eax,DWORD PTR [esi]
10042a06:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
10042a09:	85 c0                	test   eax,eax
10042a0b:	75 4b                	jne    0x10042a58
10042a0d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042a10:	83 b8 50 02 00 00 00 	cmp    DWORD PTR [eax+0x250],0x0
10042a17:	75 3f                	jne    0x10042a58
10042a19:	8b ce                	mov    ecx,esi
10042a1b:	e8 10 07 00 00       	call   0x10043130
10042a20:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042a23:	6a 64                	push   0x64
10042a25:	6a 20                	push   0x20
10042a27:	83 ec 08             	sub    esp,0x8
10042a2a:	c7 86 a4 01 00 00 00 	mov    DWORD PTR [esi+0x1a4],0x0
10042a31:	00 00 00 
10042a34:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
10042a3b:	00 
10042a3c:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10042a43:	68 78 00 1b 10       	push   0x101b0078
10042a48:	6a 06                	push   0x6
10042a4a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10042a50:	e8 9b 9f 0b 00       	call   0x100fc9f0
10042a55:	83 c4 1c             	add    esp,0x1c
10042a58:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
10042a5e:	e8 1d 4d fd ff       	call   0x10017780
10042a63:	85 c0                	test   eax,eax
10042a65:	74 7b                	je     0x10042ae2
10042a67:	53                   	push   ebx
10042a68:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
10042a6e:	e8 2d 4d fd ff       	call   0x100177a0
10042a73:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10042a76:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10042a79:	8b 80 4c 01 00 00    	mov    eax,DWORD PTR [eax+0x14c]
10042a7f:	3b 83 4c 01 00 00    	cmp    eax,DWORD PTR [ebx+0x14c]
10042a85:	74 1a                	je     0x10042aa1
10042a87:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
10042a8d:	e8 0e 4d fd ff       	call   0x100177a0
10042a92:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10042a95:	8b 83 4c 01 00 00    	mov    eax,DWORD PTR [ebx+0x14c]
10042a9b:	89 81 4c 01 00 00    	mov    DWORD PTR [ecx+0x14c],eax
10042aa1:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
10042aa7:	e8 f4 4c fd ff       	call   0x100177a0
10042aac:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10042aaf:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10042ab2:	f3 0f 10 80 50 01 00 	movss  xmm0,DWORD PTR [eax+0x150]
10042ab9:	00 
10042aba:	0f 2e 83 50 01 00 00 	ucomiss xmm0,DWORD PTR [ebx+0x150]
10042ac1:	9f                   	lahf
10042ac2:	f6 c4 44             	test   ah,0x44
10042ac5:	7b 1a                	jnp    0x10042ae1
10042ac7:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
10042acd:	e8 ce 4c fd ff       	call   0x100177a0
10042ad2:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10042ad5:	8b 83 50 01 00 00    	mov    eax,DWORD PTR [ebx+0x150]
10042adb:	89 81 50 01 00 00    	mov    DWORD PTR [ecx+0x150],eax
10042ae1:	5b                   	pop    ebx
10042ae2:	8b ce                	mov    ecx,esi
10042ae4:	e8 d7 fa ff ff       	call   0x100425c0
10042ae9:	8b 06                	mov    eax,DWORD PTR [esi]
10042aeb:	51                   	push   ecx
10042aec:	8b ce                	mov    ecx,esi
10042aee:	c7 04 24 cd cc cc 3c 	mov    DWORD PTR [esp],0x3ccccccd
10042af5:	ff 50 08             	call   DWORD PTR [eax+0x8]
10042af8:	5f                   	pop    edi
10042af9:	5e                   	pop    esi
10042afa:	c3                   	ret
