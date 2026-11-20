
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016db80 <.text+0x16cb80>:
1016db80:	8b ff                	mov    edi,edi
1016db82:	55                   	push   ebp
1016db83:	8b ec                	mov    ebp,esp
1016db85:	81 ec 10 03 00 00    	sub    esp,0x310
1016db8b:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1016db90:	33 c5                	xor    eax,ebp
1016db92:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1016db95:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1016db98:	56                   	push   esi
1016db99:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
1016db9c:	85 f6                	test   esi,esi
1016db9e:	74 04                	je     0x1016dba4
1016dba0:	85 c0                	test   eax,eax
1016dba2:	75 15                	jne    0x1016dbb9
1016dba4:	e8 00 84 00 00       	call   0x10175fa9
1016dba9:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1016dbaf:	e8 9e 1e 00 00       	call   0x1016fa52
1016dbb4:	33 c0                	xor    eax,eax
1016dbb6:	40                   	inc    eax
1016dbb7:	eb 22                	jmp    0x1016dbdb
1016dbb9:	8d 8d f0 fc ff ff    	lea    ecx,[ebp-0x310]
1016dbbf:	51                   	push   ecx
1016dbc0:	8d 4d 0c             	lea    ecx,[ebp+0xc]
1016dbc3:	51                   	push   ecx
1016dbc4:	50                   	push   eax
1016dbc5:	e8 9e 00 00 00       	call   0x1016dc68
1016dbca:	56                   	push   esi
1016dbcb:	8d 8d f0 fc ff ff    	lea    ecx,[ebp-0x310]
1016dbd1:	51                   	push   ecx
1016dbd2:	50                   	push   eax
1016dbd3:	e8 6c 2a ff ff       	call   0x10160644
1016dbd8:	83 c4 18             	add    esp,0x18
1016dbdb:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1016dbde:	5e                   	pop    esi
1016dbdf:	85 d2                	test   edx,edx
1016dbe1:	74 05                	je     0x1016dbe8
1016dbe3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1016dbe6:	89 0a                	mov    DWORD PTR [edx],ecx
1016dbe8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1016dbeb:	33 cd                	xor    ecx,ebp
1016dbed:	e8 c1 ff fc ff       	call   0x1013dbb3
1016dbf2:	c9                   	leave
1016dbf3:	c3                   	ret
