
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cef50 <.text+0xcdf50>:
100cef50:	55                   	push   ebp
100cef51:	8b ec                	mov    ebp,esp
100cef53:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cef56:	56                   	push   esi
100cef57:	57                   	push   edi
100cef58:	8b f9                	mov    edi,ecx
100cef5a:	6a 00                	push   0x0
100cef5c:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
100cef5f:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100cef62:	89 10                	mov    DWORD PTR [eax],edx
100cef64:	ff 0f                	dec    DWORD PTR [edi]
100cef66:	8b 0f                	mov    ecx,DWORD PTR [edi]
100cef68:	8b 54 cf 04          	mov    edx,DWORD PTR [edi+ecx*8+0x4]
100cef6c:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
100cef6f:	8b 4c cf 08          	mov    ecx,DWORD PTR [edi+ecx*8+0x8]
100cef73:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
100cef76:	8b cf                	mov    ecx,edi
100cef78:	e8 e3 ed ff ff       	call   0x100cdd60
100cef7d:	5f                   	pop    edi
100cef7e:	8b c6                	mov    eax,esi
100cef80:	5e                   	pop    esi
100cef81:	5d                   	pop    ebp
100cef82:	c2 04 00             	ret    0x4
