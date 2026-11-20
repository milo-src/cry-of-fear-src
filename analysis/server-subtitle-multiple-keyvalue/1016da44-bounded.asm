
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016da44 <.text+0x16ca44>:
1016da44:	8b ff                	mov    edi,edi
1016da46:	55                   	push   ebp
1016da47:	8b ec                	mov    ebp,esp
1016da49:	83 ec 1c             	sub    esp,0x1c
1016da4c:	56                   	push   esi
1016da4d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1016da50:	85 f6                	test   esi,esi
1016da52:	75 14                	jne    0x1016da68
1016da54:	e8 50 85 00 00       	call   0x10175fa9
1016da59:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1016da5f:	e8 ee 1f 00 00       	call   0x1016fa52
1016da64:	d9 ee                	fldz
1016da66:	eb 3d                	jmp    0x1016daa5
1016da68:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1016da6b:	8d 4d e4             	lea    ecx,[ebp-0x1c]
1016da6e:	e8 ed 2e fe ff       	call   0x10150960
1016da73:	d9 ee                	fldz
1016da75:	8d 45 f4             	lea    eax,[ebp-0xc]
1016da78:	50                   	push   eax
1016da79:	51                   	push   ecx
1016da7a:	51                   	push   ecx
1016da7b:	8b c4                	mov    eax,esp
1016da7d:	dd 5d f4             	fstp   QWORD PTR [ebp-0xc]
1016da80:	83 60 04 00          	and    DWORD PTR [eax+0x4],0x0
1016da84:	89 30                	mov    DWORD PTR [eax],esi
1016da86:	8d 45 e8             	lea    eax,[ebp-0x18]
1016da89:	50                   	push   eax
1016da8a:	e8 f1 00 00 00       	call   0x1016db80
1016da8f:	dd 45 f4             	fld    QWORD PTR [ebp-0xc]
1016da92:	83 c4 10             	add    esp,0x10
1016da95:	80 7d f0 00          	cmp    BYTE PTR [ebp-0x10],0x0
1016da99:	74 0a                	je     0x1016daa5
1016da9b:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
1016da9e:	83 a0 50 03 00 00 fd 	and    DWORD PTR [eax+0x350],0xfffffffd
1016daa5:	5e                   	pop    esi
1016daa6:	c9                   	leave
1016daa7:	c3                   	ret
