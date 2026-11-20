
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1015cc01 <.text+0x15bc01>:
1015cc01:	8b ff                	mov    edi,edi
1015cc03:	55                   	push   ebp
1015cc04:	8b ec                	mov    ebp,esp
1015cc06:	83 ec 38             	sub    esp,0x38
1015cc09:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
1015cc0c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1015cc0f:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1015cc12:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
1015cc15:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
1015cc18:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1015cc1b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1015cc1e:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
1015cc21:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1015cc24:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
1015cc27:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1015cc2a:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1015cc2d:	85 c9                	test   ecx,ecx
1015cc2f:	75 15                	jne    0x1015cc46
1015cc31:	e8 73 93 01 00       	call   0x10175fa9
1015cc36:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1015cc3c:	e8 11 2e 01 00       	call   0x1016fa52
1015cc41:	83 c8 ff             	or     eax,0xffffffff
1015cc44:	c9                   	leave
1015cc45:	c3                   	ret
1015cc46:	85 d2                	test   edx,edx
1015cc48:	74 e7                	je     0x1015cc31
1015cc4a:	8d 45 f8             	lea    eax,[ebp-0x8]
1015cc4d:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
1015cc50:	89 45 c8             	mov    DWORD PTR [ebp-0x38],eax
1015cc53:	8d 45 f4             	lea    eax,[ebp-0xc]
1015cc56:	89 45 cc             	mov    DWORD PTR [ebp-0x34],eax
1015cc59:	8d 45 dc             	lea    eax,[ebp-0x24]
1015cc5c:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
1015cc5f:	8d 45 f0             	lea    eax,[ebp-0x10]
1015cc62:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
1015cc65:	8d 45 ec             	lea    eax,[ebp-0x14]
1015cc68:	89 45 d8             	mov    DWORD PTR [ebp-0x28],eax
1015cc6b:	8d 45 e8             	lea    eax,[ebp-0x18]
1015cc6e:	50                   	push   eax
1015cc6f:	8d 45 c8             	lea    eax,[ebp-0x38]
1015cc72:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
1015cc75:	50                   	push   eax
1015cc76:	8d 45 e4             	lea    eax,[ebp-0x1c]
1015cc79:	50                   	push   eax
1015cc7a:	8d 4d ff             	lea    ecx,[ebp-0x1]
1015cc7d:	e8 b8 f0 fe ff       	call   0x1014bd3a
1015cc82:	c9                   	leave
1015cc83:	c3                   	ret
