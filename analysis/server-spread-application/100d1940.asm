
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1940 <.text+0xd0940>:
100d1940:	56                   	push   esi
100d1941:	8b f1                	mov    esi,ecx
100d1943:	8b 86 08 02 00 00    	mov    eax,DWORD PTR [esi+0x208]
100d1949:	83 e8 00             	sub    eax,0x0
100d194c:	74 1b                	je     0x100d1969
100d194e:	83 e8 01             	sub    eax,0x1
100d1951:	75 1e                	jne    0x100d1971
100d1953:	8b 06                	mov    eax,DWORD PTR [esi]
100d1955:	ff 90 dc 01 00 00    	call   DWORD PTR [eax+0x1dc]
100d195b:	8b 86 cc 01 00 00    	mov    eax,DWORD PTR [esi+0x1cc]
100d1961:	89 86 d0 01 00 00    	mov    DWORD PTR [esi+0x1d0],eax
100d1967:	5e                   	pop    esi
100d1968:	c3                   	ret
100d1969:	8b 06                	mov    eax,DWORD PTR [esi]
100d196b:	ff 90 d8 01 00 00    	call   DWORD PTR [eax+0x1d8]
100d1971:	8b 86 cc 01 00 00    	mov    eax,DWORD PTR [esi+0x1cc]
100d1977:	89 86 d0 01 00 00    	mov    DWORD PTR [esi+0x1d0],eax
100d197d:	5e                   	pop    esi
100d197e:	c3                   	ret
